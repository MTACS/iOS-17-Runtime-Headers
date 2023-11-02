
@interface SWSystemActivityProvider : NSObject <SWSystemActivityProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProvider;

- (id)createTimerWithIdentifier:(id)arg1;
- (id)declareSystemActivityWithName:(id)arg1;
- (unsigned long long)getMachContinuousKernelWakeTime;
- (void)releaseAssertionID:(unsigned int)arg1;

@end
