
@interface DTOSLogArgumentPlaceholderDescription : NSObject <NSCopying> {
    NSString * _placeholderKey;
    long long  _placeholderKind;
    NSString * _placeholderObjectValue;
    NSString * _placeholderToken;
}

@property (nonatomic, readonly) NSString *placeholderKey;
@property (nonatomic, readonly) long long placeholderKind;
@property (nonatomic, readonly) NSString *placeholderObjectValue;
@property (nonatomic, readonly) NSString *placeholderToken;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithPlaceholderToken:(id)arg1;
- (id)placeholderKey;
- (long long)placeholderKind;
- (id)placeholderObjectValue;
- (id)placeholderToken;

@end
