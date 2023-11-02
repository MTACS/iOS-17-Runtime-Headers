
@interface VSAccountApplicationProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    NSString * _localizedDisplayName;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedDisplayName;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedDisplayName:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
