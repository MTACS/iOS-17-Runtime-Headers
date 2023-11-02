
@interface ATXAVRouteInfo : NSObject <NSSecureCoding> {
    NSString * _deviceID;
    NSString * _deviceName;
    bool  _isExternalRoute;
}

@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) bool isExternalRoute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceID;
- (id)deviceName;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 deviceID:(id)arg2 isExternalRoute:(bool)arg3;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isExternalRoute;
- (id)proto;

@end
