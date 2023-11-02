
@interface _HKSPNoop : NSObject <HKSPMutexProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)performBlock:(id /* block */)arg1;

@end
