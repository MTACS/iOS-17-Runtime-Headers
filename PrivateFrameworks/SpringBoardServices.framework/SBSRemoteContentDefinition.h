
@interface SBSRemoteContentDefinition : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying> {
    NSString * _serviceName;
    NSDictionary * _userInfo;
    NSString * _viewControllerClassName;
    NSObject<OS_xpc_object> * _xpcEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, readonly, copy) NSString *viewControllerClassName;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcEndpoint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 xpcEndpoint:(id)arg3 userInfo:(id)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (id)serviceName;
- (void)setUserInfo:(id)arg1;
- (void)setXpcEndpoint:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInfo;
- (id)viewControllerClassName;
- (id)xpcEndpoint;

@end
