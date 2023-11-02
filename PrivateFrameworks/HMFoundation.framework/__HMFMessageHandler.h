
@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject> {
    unsigned long long  _hash;
    NSString * _name;
    NSArray * _policies;
    NSObject<OS_dispatch_queue> * _queue;
    <HMFMessageReceiver> * _receiver;
    NSUUID * _target;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *policies;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) <HMFMessageReceiver> *receiver;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *target;

+ (id)handlerWithReceiver:(id)arg1 name:(id)arg2 policies:(id)arg3 handler:(id /* block */)arg4;
+ (id)handlerWithReceiver:(id)arg1 targetUUID:(id)arg2 name:(id)arg3 policies:(id)arg4 selector:(SEL)arg5;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (bool)hasReceiver:(id)arg1;
- (unsigned long long)hash;
- (id)initWithReceiver:(id)arg1 targetUUID:(id)arg2 name:(id)arg3 policies:(id)arg4;
- (bool)invokeWithMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)name;
- (id)policies;
- (id)queue;
- (id)receiver;
- (id)shortDescription;
- (id)target;

@end
