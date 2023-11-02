
@interface CSRemoteDeviceProtocolInfo : NSObject {
    NSString * _buildVersion;
    unsigned long long  _deviceCategory;
    NSString * _deviceProductType;
    NSString * _deviceProductVersion;
    unsigned long long  _protocolVersion;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) unsigned long long deviceCategory;
@property (nonatomic, readonly) NSString *deviceProductType;
@property (nonatomic, readonly) NSString *deviceProductVersion;
@property (nonatomic, readonly) unsigned long long protocolVersion;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

+ (id)defaultProtocolInfo;
+ (id)localDeviceProtocolInfo;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)description;
- (unsigned long long)deviceCategory;
- (id)deviceProductType;
- (id)deviceProductVersion;
- (id)initWithProtocolVersion:(unsigned long long)arg1 buildVersion:(id)arg2 deviceProductVersion:(id)arg3 deviceProductType:(id)arg4 deviceCategory:(unsigned long long)arg5;
- (id)initWithXPCObject:(id)arg1;
- (unsigned long long)protocolVersion;
- (id)xpcObject;

@end
