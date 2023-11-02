
@interface REMTimestampedUUID : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSDate * _modifiedOn;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDate *modifiedOn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 modifiedOn:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modifiedOn;

@end
