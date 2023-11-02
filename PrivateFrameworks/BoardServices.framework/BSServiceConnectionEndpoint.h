
@interface BSServiceConnectionEndpoint : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    NSObject<OS_xpc_object> * _endpoint;
    NSString * _instance;
    bool  _nonLaunching;
    NSUUID * _oneshot;
    NSString * _service;
    NSString * _targetDescription;
    int  _targetPID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *instance;
@property (getter=isNonLaunching, nonatomic, readonly) bool nonLaunching;
@property (nonatomic, readonly, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetDescription;

+ (id)defaultShellMachName;
+ (id)endpointForMachName:(id)arg1 service:(id)arg2 instance:(id)arg3;
+ (id)endpointForServiceName:(id)arg1 oneshot:(id)arg2 service:(id)arg3 instance:(id)arg4;
+ (id)endpointForSystemMachName:(id)arg1 service:(id)arg2 instance:(id)arg3;
+ (id)nullEndpointForService:(id)arg1 instance:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)instance;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServiceEndpoint:(id)arg1;
- (bool)isNonLaunching;
- (bool)isNullEndpoint;
- (void)saveAsInjectorEndowmentForKey:(id)arg1;
- (id)service;
- (id)targetDescription;

@end
