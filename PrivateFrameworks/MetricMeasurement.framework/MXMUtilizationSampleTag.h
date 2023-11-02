
@interface MXMUtilizationSampleTag : MXMSampleTag

+ (id)CPU;
+ (id)CPUCycles;
+ (id)CPUInstructions;
+ (id)CPULoad;
+ (id)CPULoadTask;
+ (id)CPULoadThread;
+ (id)CPUQos;
+ (id)CPUQosBackground;
+ (id)CPUQosDefault;
+ (id)CPUQosLegacy;
+ (id)CPUQosMaintenance;
+ (id)CPUQosUserInitiated;
+ (id)CPUQosUserInteractive;
+ (id)CPUQosUtility;
+ (id)CPUTicks;
+ (id)CPUTicksIdle;
+ (id)CPUTicksNice;
+ (id)CPUTicksSystem;
+ (id)CPUTicksUser;
+ (id)CPUTime;
+ (id)CPUTimeSystem;
+ (id)CPUTimeUser;
+ (id)IO;
+ (id)IOLogicalWrites;
+ (id)IOReads;
+ (id)IOWrites;
+ (id)machPort;
+ (id)memory;
+ (id)memoryDirtied;
+ (id)memoryLeak;
+ (id)memoryPeakPhysicalInterval;
+ (id)memoryPeakPhysicalLifetime;
+ (id)memoryPhysical;
+ (id)memoryResident;
+ (id)memorySwapped;
+ (id)memoryVirtual;
+ (id)memoryWired;
+ (id)network;
+ (id)networkRecievedBytes;
+ (id)networkRecievedPackets;
+ (id)networkSentBytes;
+ (id)networkSentPackets;

@end
