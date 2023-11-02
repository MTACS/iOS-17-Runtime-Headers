
@interface HMMultiuserSettingsMessenger : NSObject <HMFLogging, HMFObject> {
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (id)initWithMessageDispatcher:(id)arg1 messageTargetUUID:(id)arg2;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (id)privateDescription;
- (void)sendFetchMultiuserSettingsRequest:(id /* block */)arg1;
- (id)shortDescription;

@end
