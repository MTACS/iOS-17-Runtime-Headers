
@interface MBDeviceTransferKeychain : NSObject <NSCopying, NSSecureCoding> {
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
