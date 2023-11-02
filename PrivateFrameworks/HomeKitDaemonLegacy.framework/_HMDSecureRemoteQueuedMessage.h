
@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject> {
    HMDRemoteMessage * _message;
    HMFTimer * _timer;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDRemoteMessage *message;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMFTimer *timer;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (id)propertyDescription;
- (id)shortDescription;
- (id)timer;

@end
