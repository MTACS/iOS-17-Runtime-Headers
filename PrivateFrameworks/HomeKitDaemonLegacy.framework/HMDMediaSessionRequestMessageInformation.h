
@interface HMDMediaSessionRequestMessageInformation : HMFObject <HMFLogging> {
    HMFMessage * _message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessage *message;
@property (readonly, copy) NSUUID *messageIdentifier;
@property (readonly) HMDDevice *remoteSourceDevice;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)messageIdentifier;
- (id)remoteSourceDevice;

@end
