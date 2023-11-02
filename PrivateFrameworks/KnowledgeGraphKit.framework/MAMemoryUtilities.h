
@interface MAMemoryUtilities : NSObject

+ (unsigned long long)footprintBytes;
+ (id)humanReadableMemoryFootprint;
+ (id)humanReadableMemorySizeWithSize:(unsigned long long)arg1;
+ (id)humanReadablePeakMemoryFootprint;
+ (id)humanReadableResidentMemory;
+ (unsigned long long)peakFootprintBytes;
+ (unsigned long long)residentBytes;

@end
