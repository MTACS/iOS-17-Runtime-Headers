
@interface HKSPXPCConnectionInfo : NSObject <BSDescriptionProviding> {
    id  _exportedObject;
    NSXPCInterface * _exportedObjectInterface;
    NSString * _lifecycleNotification;
    NSString * _machServiceName;
    unsigned long long  _options;
    NSXPCInterface * _remoteObjectInterface;
    NSString * _requiredEntitlement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id exportedObject;
@property (nonatomic, readonly) NSXPCInterface *exportedObjectInterface;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *lifecycleNotification;
@property (nonatomic, readonly, copy) NSString *machServiceName;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSXPCInterface *remoteObjectInterface;
@property (nonatomic, readonly, copy) NSString *requiredEntitlement;
@property (readonly) Class superclass;

+ (id)infoForMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)exportedObject;
- (id)exportedObjectInterface;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObject:(id)arg3 exportedObjectInterface:(id)arg4 lifecycleNotification:(id)arg5 requiredEntitlement:(id)arg6 options:(unsigned long long)arg7;
- (id)lifecycleNotification;
- (id)machServiceName;
- (unsigned long long)options;
- (id)remoteObjectInterface;
- (id)requiredEntitlement;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
