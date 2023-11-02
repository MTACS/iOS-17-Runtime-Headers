
@interface MCMXPCMessageSetDataProtection : MCMXPCMessageWithContainerBase <MCMParametersSetDataProtection> {
    int  _dataProtectionClass;
    bool  _retryIfLocked;
    bool  _thirdParty;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) int dataProtectionClass;
@property (nonatomic, readonly) bool retryIfLocked;
@property (getter=isThirdParty, nonatomic, readonly) bool thirdParty;

- (int)dataProtectionClass;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (bool)isThirdParty;
- (bool)retryIfLocked;

@end
