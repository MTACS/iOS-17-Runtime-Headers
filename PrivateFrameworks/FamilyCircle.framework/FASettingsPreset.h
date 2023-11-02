
@interface FASettingsPreset : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _maxAge;
    long long  _minAge;
    NSArray * _sources;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long maxAge;
@property (nonatomic, readonly) long long minAge;
@property (nonatomic, readonly, copy) NSArray *sources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 minAge:(long long)arg2 maxAge:(long long)arg3 sources:(id)arg4;
- (bool)isEqual:(id)arg1;
- (long long)maxAge;
- (long long)minAge;
- (id)sourceWithIdentifier:(id)arg1;
- (id)sources;

@end
