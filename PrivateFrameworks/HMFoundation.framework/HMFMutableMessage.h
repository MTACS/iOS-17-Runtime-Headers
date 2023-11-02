
@interface HMFMutableMessage : HMFMessage

@property (nonatomic, retain) HMFActivity *activity;
@property (nonatomic, retain) HMFMessageDestination *destination;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSUUID *identifier;
@property (getter=isInternal, nonatomic) bool internal;
@property (nonatomic, copy) NSDictionary *messagePayload;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long qualityOfService;
@property (getter=isRemote, nonatomic) bool remote;
@property (nonatomic) unsigned long long remoteRestriction;
@property (nonatomic, retain) HMDRemoteMessageSenderContext *remoteSenderContext;
@property (nonatomic, retain) NSString *remoteSourceID;
@property (nonatomic, retain) NSString *remoteToID;
@property (nonatomic) bool requiresNoSPIEntitlement;
@property (nonatomic) bool requiresSPIEntitlement;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (getter=isSecureRemote, nonatomic) bool secureRemote;
@property (nonatomic) double timeout;
@property (retain) HMDBackingStoreTransactionActions *transactionResult;
@property (nonatomic) HMFMessageTransport *transport;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActivity:(id)arg1;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
- (void)setHeaders:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTransport:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;

- (void)setInternal:(bool)arg1;
- (void)setRemote:(bool)arg1;
- (void)setRemoteResponseRestriction:(unsigned long long)arg1;
- (void)setRemoteRestriction:(unsigned long long)arg1;
- (void)setRemoteSenderContext:(id)arg1;
- (void)setRemoteSourceID:(id)arg1;
- (void)setRemoteToID:(id)arg1;
- (void)setRequiresCameraClipsEntitlement;
- (void)setRequiresMatterSetupPayloadEntitlement;
- (void)setRequiresMultiUserSetupEntitlement;
- (void)setRequiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement:(bool)arg1;
- (void)setRequiresPersonManagerEntitlement;
- (void)setRequiresSPIEntitlement;
- (void)setRequiresSPIEntitlement:(bool)arg1;
- (void)setRequiresSetupPayloadEntitlement;
- (void)setRequiresWalletKeyEntitlement;
- (void)setSecureRemote:(bool)arg1;
- (void)setSendPolicy:(id)arg1;
- (void)setTransactionResult:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;

- (void)setInternal:(bool)arg1;
- (void)setRemote:(bool)arg1;
- (void)setRemoteResponseRestriction:(unsigned long long)arg1;
- (void)setRemoteRestriction:(unsigned long long)arg1;
- (void)setRemoteSenderContext:(id)arg1;
- (void)setRemoteSourceID:(id)arg1;
- (void)setRemoteToID:(id)arg1;
- (void)setRequiresCameraClipsEntitlement;
- (void)setRequiresMatterSetupPayloadEntitlement;
- (void)setRequiresMultiUserSetupEntitlement;
- (void)setRequiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement:(bool)arg1;
- (void)setRequiresPersonManagerEntitlement;
- (void)setRequiresSPIEntitlement;
- (void)setRequiresSPIEntitlement:(bool)arg1;
- (void)setRequiresSetupPayloadEntitlement;
- (void)setRequiresWalletKeyEntitlement;
- (void)setSecureRemote:(bool)arg1;
- (void)setSendPolicy:(id)arg1;
- (void)setTransactionResult:(id)arg1;

@end
