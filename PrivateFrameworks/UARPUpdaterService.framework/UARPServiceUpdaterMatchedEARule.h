
@interface UARPServiceUpdaterMatchedEARule : NSObject <NSSecureCoding> {
    NSString * _accessorySerialNumber;
    NSString * _eaIdentifier;
}

@property (readonly) NSString *accessorySerialNumber;
@property (readonly) NSString *eaIdentifier;

+ (bool)supportsSecureCoding;

- (id)accessorySerialNumber;
- (void)dealloc;
- (id)description;
- (id)eaIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEAIdentifier:(id)arg1 accessorySerialNumber:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
