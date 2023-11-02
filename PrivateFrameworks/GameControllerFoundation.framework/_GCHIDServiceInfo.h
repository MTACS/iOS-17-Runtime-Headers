
@interface _GCHIDServiceInfo : NSObject <NSCopying, _GCImplicitIPCObject> {
    NSData * _inputData;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _registryID;
    struct __IOHIDServiceClient { } * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, retain) NSData *inputData;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNumber *registryID;
@property (readonly) struct __IOHIDServiceClient { }*service;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithService:(struct __IOHIDServiceClient { }*)arg1 queue:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHIDServiceInfo:(id)arg1;
- (id)queue;
- (id)redactedDescription;
- (id)registryID;
- (struct __IOHIDServiceClient { }*)service;

// Image: /System/Library/Frameworks/GameController.framework/GameController

- (id)identifier;
- (id)initWithService:(struct __IOHIDServiceClient { }*)arg1;
- (id)inputData;
- (id)name;
- (void)setInputData:(id)arg1;

@end
