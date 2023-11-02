
@interface SBSAssertion : NSObject <BSInvalidatable> {
    NSString * _assertionName;
    NSString * _reason;
    BSMachPortReceiveRight * _receiveRight;
}

@property (nonatomic, readonly, copy) NSString *assertionName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) BSMachPortReceiveRight *receiveRight;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)addHandler:(id /* block */)arg1 forDeathOfServerPort:(id)arg2;
- (id)assertionName;
- (void)dealloc;
- (id)init;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned int)arg3;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 receiveRight:(id)arg3;
- (void)invalidate;
- (bool)isValid;
- (id)reason;
- (id)receiveRight;

@end
