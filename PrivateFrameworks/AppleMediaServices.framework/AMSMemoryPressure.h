
@interface AMSMemoryPressure : NSObject

+ (id)_memoryPressureStatusForMemoryPressure:(unsigned int)arg1;
+ (void)initialize;
+ (id)lastKnownStatus;
+ (id)observable;
+ (void)subscribe:(id)arg1;
+ (void)unsubscribe:(id)arg1;

@end
