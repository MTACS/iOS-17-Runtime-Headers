
@interface SBSRemoteAlertConfigurationContext : NSObject <BSXPCCoding, NSSecureCoding> {
    NSSet * _actions;
    NSDictionary * _legacyAlertOptions;
    NSDictionary * _userInfo;
    NSObject<OS_xpc_object> * _xpcEndpoint;
}

@property (nonatomic, copy) NSSet *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *legacyAlertOptions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcEndpoint;

+ (id)configurationContextWithLegacyAlertOptions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)legacyAlertOptions;
- (void)setActions:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXpcEndpoint:(id)arg1;
- (id)userInfo;
- (id)xpcEndpoint;

@end
