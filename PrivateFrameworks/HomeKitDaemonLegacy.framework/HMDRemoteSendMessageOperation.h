
@interface HMDRemoteSendMessageOperation : HMFOperation <HMFLogging, HMFObject> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFMessage * _message;
    bool  _messageResponseHandled;
    HMDSecureRemoteMessageTransport * _transport;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessage *message;
@property (getter=isMessageResponseHandled) bool messageResponseHandled;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) HMDSecureRemoteMessageTransport *transport;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_respondWithError:(id)arg1 playload:(id)arg2;
- (id)attributeDescriptions;
- (void)cancelWithError:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1 transport:(id)arg2;
- (bool)isMessageResponseHandled;
- (id)logIdentifier;
- (void)main;
- (id)message;
- (id)privateDescription;
- (void)setMessageResponseHandled:(bool)arg1;
- (id)shortDescription;
- (id)transport;

@end
