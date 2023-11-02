
@interface TRIPETLogHandler : NSObject <TRILogHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)logEvent:(id)arg1 subgroupName:(id)arg2 queue:(id)arg3;

@end
