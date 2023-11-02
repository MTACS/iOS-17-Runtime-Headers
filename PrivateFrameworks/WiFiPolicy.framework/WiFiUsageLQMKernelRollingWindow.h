
@interface WiFiUsageLQMKernelRollingWindow : NSObject

+ (void)addSample:(id)arg1 To:(id)arg2;
+ (void)advanceReadingPointerOf:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)isOngoing;
+ (id)kernelLQMRollingWindow:(id)arg1 withReferenceWindow:(id)arg2 andLqmFeatures:(id)arg3;
+ (unsigned long long)parseKernelBlobInto:(id)arg1;

@end
