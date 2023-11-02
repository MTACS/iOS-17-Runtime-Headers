
@interface HMDTimer : NSObject <HMDTimerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end
