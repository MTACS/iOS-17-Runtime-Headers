
@interface BMDevice : NSObject <NSSecureCoding> {
    NSString * _deviceIdentifier;
    NSString * _idsDeviceIdentifier;
    NSString * _model;
    NSString * _name;
    long long  _platform;
}

@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly, copy) NSString *idsDeviceIdentifier;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long platform;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)idsDeviceIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1 idsDeviceIdentifier:(id)arg2 name:(id)arg3 model:(id)arg4 platform:(long long)arg5;
- (id)model;
- (id)name;
- (long long)platform;

@end
