# Vigilancia Tecnológica de las Tecnologías de Comunicación Industrial

## 1. PROFIBUS  
**Descripción general:**  
PROFIBUS (Process Field Bus) es una familia de protocolos de comunicación industrial maduros, diseñados para conectar controladores y periféricos en entornos de automatización.  
🔗 [Fuente: PROFIBUS – tecnologies (profibus.com)](https://www.profibus.com/technologies/profibus) :contentReference[oaicite:1]{index=1}  

**Principales tecnologías/variantes relevantes:**  
1. **PROFIBUS DP (Decentralized Peripherals)** – Variante para conexión rápida de E/S distribuidas a nivel de fábrica.  
   🔗 [Fuente: How does PROFIBUS DP work? (PI North America)](https://www.profinet.com/how-does-profibus-dp-work/) :contentReference[oaicite:2]{index=2}  
2. **PROFIBUS PA (Process Automation)** – Variante optimizada para instalaciones de proceso, zonas con riesgo de explosión, conectividad intrínsecamente segura.  
   🔗 [Fuente: PROFIBUS System Description (PDF)](https://www.profibus.com/fileadmin/media/downloadsection/PROFINET-Systembeschreibung_ENG_web.pdf) :contentReference[oaicite:3]{index=3}  
3. **PROFIBUS-IS (Intrinsically Safe)** – Variante certificada para entornos peligrosos, donde la seguridad y robustez eléctrica son críticas.  
   🔗 [Fuente: PROFIBUS System Description (PDF)](https://www.profibus.com/fileadmin/media/downloadsection/PROFINET-Systembeschreibung_ENG_web.pdf) :contentReference[oaicite:4]{index=4}  

**Vigilancia tecnológica:**  
- Se mantiene fuerte en instalaciones existentes, especialmente en sectores con infraestructura legacy.  
- En nuevos proyectos, se observa un desplazamiento aplicado hacia tecnologías Ethernet industriales.  
- Importante monitorear: la coexistencia PROFIBUS ↔ PROFINET, coste de migración y adaptación de dispositivos.

---

## 2. PROFINET  
**Descripción general:**  
PROFINET es una tecnología basada en Ethernet industrial que permite comunicación rápida, determinista y con sincronización precisa, adecuada para automatización moderna y la Industria 4.0.  
🔗 [Fuente: PROFINET IRT – White Paper](https://us.profinet.com/white-papers/profinet-irt-the-solution-for-synchronous-real-time-applications/) :contentReference[oaicite:6]{index=6}  

**Principales tecnologías/variantes relevantes:**  
1. **PROFINET RT (Real-Time)** – Canal para intercambio de datos en tiempo cercano al real para E/S distribuidas.  
   🔗 [Fuente: PROFINET IRT Engineering Guideline](https://www.profibus.com/download/profinet-irt-engineering-guideline) :contentReference[oaicite:7]{index=7}  
2. **PROFINET IRT (Isochronous Real-Time)** – Variante que proporciona sincronización de alta precisión, utilizada en control de movimiento y eje múltiple.  
   🔗 [Fuente: PROFINET IRT (TIA Portal)](https://docs.tia.siemens.cloud/r/simatic_s7_1200_g2_manual_collection_itit_20/communication/profinet/isochronous-real-time-profinet-irt) :contentReference[oaicite:8]{index=8}  
3. **PROFINET over TSN (Time Sensitive Networking)** – Evolución para implementar TSN sobre Ethernet permitiendo tráfico determinista, baja latencia y convergencia IT/OT.  
   🔗 [Fuente: New White Paper: PROFINET IRT (PROFINETews)](https://www.profinews.com/2020/11/new-white-paper-profinet-isochronous-real-time-irt/) :contentReference[oaicite:9]{index=9}  

**Vigilancia tecnológica:**  
- PROFINET es una opción clave para nuevas instalaciones en automatización avanzada.  
- Su evolución hacia TSN y Single Pair Ethernet (SPE) debe ser observada.  
- Perfiles complementarios (por ejemplo PROFIdrive, PROFIsafe, PROFIenergy) amplían su ecosistema.

---

## 3. Ethernet Industrial  
**Descripción general:**  
El término “Ethernet Industrial” abarca la aplicación de la tecnología Ethernet convencional adaptada para entornos industriales, con requerimientos de tolerancia al ruido, alta velocidad, robustez y determinismo.  
🔗 [Fuente: Industrial Ethernet Technologies: Overview and Comparison (EtherCAT Technology Group)](https://www.ethercat.org/download/documents/industrial_ethernet_technologies.pdf) :contentReference[oaicite:10]{index=10}  

**Principales tecnologías/variantes relevantes:**  
1. **EtherNet/IP** – Basado en el protocolo CIP (Common Industrial Protocol), ampliamente usado en América.  
   🔗 [Fuente: Ethernet vs. EtherCAT blog](https://www.astrodynetdi.com/blog/ethernet-vs.-ethercat) :contentReference[oaicite:11]{index=11}  
2. **EtherCAT (Ethernet for Control Automation Technology)** – Tecnología de Ethernet industrial con ciclo muy rápido, baja latencia, adecuada para control de movimiento.  
   🔗 [Fuente: What is the EtherCAT communication protocol? (Acontis)](https://www.acontis.com/en/what-is-ethercat-communication-protocol.html) :contentReference[oaicite:12]{index=12}  
3. **POWERLINK / SPE / Single Pair Ethernet –** Aunque SPE es en parte infraestructura de cableado, sirve como variante de Ethernet Industrial para la capa de transmisión con sólo un par y capacidades gigabit.  
   🔗 [Fuente: Single Pair Ethernet (HELUKABEL)](https://www.helukabel.us/us-en/products-solutions/industrial-machine-cables/industrial-ethernet-bus-cables/single-pair-ethernet.html) :contentReference[oaicite:13]{index=13}  

**Vigilancia tecnológica:**  
- Migración de IT ↔ OT: Ethernet se convierte en columna vertebral de redes industriales modernas.  
- Importante monitorear: cableado (Cat6a, Cat7, Cat8), fibra óptica, TSN, SPE.  
- Seguridad de red, segmentación, redundancia: claves en esta capa.

---

## 4. AS‑Interface (AS-i)  
**Descripción general:**  
AS-Interface (Actuator-Sensor Interface) es un bus de campo económico y simple, diseñado para conectar sensores y actuadores al nivel de campo con un único cable de dos conductores que transmite datos y alimentación.  
🔗 [Fuente: AS-Interface: The fieldbus standard (Bürkert)](https://www.burkert-usa.com/en/service-support/knowledge-center/glossary/as-interface-the-fieldbus-standard) :contentReference[oaicite:15]{index=15}  

**Principales tecnologías/variantes relevantes:**  
1. **AS-i versión estándar** – Conexión de sensores/actuadores, cable amarillo de 2 conductores.  
   🔗 [Fuente: AS-Interface System Overview (IFM)](https://www.ifm.com/de/en/shared/technologies/as-interface/as-interface-system-overview) :contentReference[oaicite:16]{index=16}  
2. **AS-i Safe** – Extensión del bus para circuitos de seguridad funcional, integrando elementos como paradas de emergencia.  
   🔗 [Fuente: AS-Interface (Bihl-Wiedemann)](https://www.bihl-wiedemann.de/us/applications/as-interface) :contentReference[oaicite:17]{index=17}  
3. **AS-i Power 24V / estructuras modulares** – Modernización del bus para alimentación de dispositivos mediante 24 V y integración en planta.  
   🔗 [Fuente: AS-Interface – the fieldbus standard (Bürkert)](https://www.burkert-usa.com/en/service-support/knowledge-center/glossary/as-interface-the-fieldbus-standard) :contentReference[oaicite:18]{index=18}  

**Vigilancia tecnológica:**  
- Aún relevante en el nivel de campo por su bajo coste y cableado mínimo.  
- Debe observarse su integración con buses superiores (PROFIBUS, PROFINET) a través de gateways.  
- En el contexto IIoT, monitorear su relevancia frente a sensores “Ethernet nativos”.

---

## 5. RS-485  
**Descripción general:**  
RS-485 (estándar TIA/EIA-485) es un método de comunicación serial diferencial usado ampliamente en entornos industriales para comunicaciones robustas, multidrop y largas distancias.  
🔗 [Fuente: RS-485 estándar (Profibus Brasil)](https://www.profibus.org.br/noticia/tecnologia-rs485-voce-sabe-o-que-e/) :contentReference[oaicite:19]{index=19}  

**Principales características/variantes relevantes:**  
1. **Implementación básica RS-485 diferencial** – Variante física que soporta hasta 1200 m, múltiples nodos participantes.  
   🔗 [Fuente: RS-485 standard overview (Profibus.org.br)](https://www.profibus.org.br/noticia/tecnologia-rs485-voce-sabe-o-que-e/) :contentReference[oaicite:20]{index=20}  
2. **Modbus RTU sobre RS-485** – Una de las aplicaciones más comunes del RS-485, especialmente en instrumentación de campo.  
   🔗 [Fuente: RS-485 overview (Profibus.org.br)](https://www.profibus.org.br/noticia/tecnologia-rs485-voce-sabe-o-que-e/) :contentReference[oaicite:21]{index=21}  
3. **Gateways RS-485 ↔ Ethernet** – Solución de migración para integrar dispositivos RS-485 en redes Ethernet industriales.  
   🔗 [Fuente: RS-485 overview (Profibus.org.br)](https://www.profibus.org.br/noticia/tecnologia-rs485-voce-sabe-o-que-e/) :contentReference[oaicite:22]{index=22}  

**Vigilancia tecnológica:**  
- Sigue vigente gracias a su coste reducido y robustez.  
- Importante monitorear su reemplazo progresivo por buses más rápidos o redes Ethernet.  
- Clave en soluciones de retrofitting (modernización) de sistemas industriales antiguos.

---

## 6. Conclusión  
La vigilancia tecnológica de estas plataformas de comunicación permite evidenciar tres grandes tendencias:  
- Conservación y mantenimiento de infraestructuras legacy (PROFIBUS, RS-485) frente a nuevas redes Ethernet.  
- Avance acelerado hacia Ethernet industrial y protocolos deterministas (PROFINET, EtherCAT) y hacia niveles de campo con SPE.  
- Necesidad de planificar migraciones, interoperabilidad y stds de seguridad en redes convergentes IT/OT.

---

📌 **Recomendaciones para seguimiento:**  
- Vigila despliegue real en nuevos proyectos: ¿qué protocolo se está instalando?  
- Observa compatibilidad con IoT, sensores distribuidos, edge computing.  
- Evalúa la evolución del cableado físico (Cat 6A, Cat 8, SPE) y la infraestructura de red.  
- Mantente al tanto de requisitos de ciberseguridad, segmentación, redundancia.  
- Considera la duración de vida útil, coste de transición y soporte de fabricantes.

