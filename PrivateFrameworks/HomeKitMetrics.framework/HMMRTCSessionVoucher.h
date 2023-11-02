
@interface HMMRTCSessionVoucher : NSObject <NSSecureCoding> {
    NSString * _serviceName;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 serviceName:(id)arg2;
- (id)serviceName;
- (id)uuid;

@end
