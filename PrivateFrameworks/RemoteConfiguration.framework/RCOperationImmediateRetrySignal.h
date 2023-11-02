
@interface RCOperationImmediateRetrySignal : NSObject <RCOperationRetrySignal>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (void)onQueue:(id)arg1 signal:(id /* block */)arg2;

@end
