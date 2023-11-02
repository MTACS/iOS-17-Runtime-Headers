
@interface HMDRemoteAccountMessageFilter : HMDMessageFilter {
    NSArray * _allowedMessages;
    HMDAppleAccountManager * _appleAccountManager;
    <HAPKeyStore> * _systemKeychainStore;
    HMFMessageDestination * _target;
}

@property (readonly, copy) NSArray *allowedMessages;
@property (nonatomic, retain) HMDAppleAccountManager *appleAccountManager;
@property (nonatomic, retain) <HAPKeyStore> *systemKeychainStore;
@property (readonly) HMFMessageDestination *target;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)allowedMessages;
- (id)appleAccountManager;
- (id)initWithName:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 allowedMessages:(id)arg2;
- (id)initWithTarget:(id)arg1 allowedMessages:(id)arg2 appleAccountManager:(id)arg3 systemKeychainStore:(id)arg4;
- (id)logIdentifier;
- (void)setAppleAccountManager:(id)arg1;
- (void)setSystemKeychainStore:(id)arg1;
- (id)systemKeychainStore;
- (id)target;

@end
