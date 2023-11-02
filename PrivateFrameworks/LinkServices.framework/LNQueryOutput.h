
@interface LNQueryOutput : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    LNValue * _value;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2;
- (id)value;

@end
