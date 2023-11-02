
@interface ASCAdamID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _stringValue;
}

@property (nonatomic, readonly) long long int64value;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly, copy) NSString *stringValue;

+ (id)invalidAdamID;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInt64:(long long)arg1;
- (id)initWithNumberValue:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (long long)int64value;
- (bool)isEqual:(id)arg1;
- (id)numberValue;
- (id)stringValue;

@end
