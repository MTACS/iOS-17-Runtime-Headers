
@interface AXSSKeyboardCommand : NSObject <NSCopying, NSSecureCoding> {
    NSString * _standardCommandIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *standardCommandIdentifier;
@property (nonatomic, readonly) NSString *type;

+ (id)commandWithStandardCommandIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(id)arg1 standardCommandIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStandardCommandIdentifier:(id)arg1;
- (id)initWithType:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCommand:(id)arg1;
- (id)localizedName;
- (id)standardCommandIdentifier;
- (id)type;

@end
