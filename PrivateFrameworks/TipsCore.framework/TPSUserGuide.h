
@interface TPSUserGuide : NSObject <NSSecureCoding> {
    void gradient;
    void gradientColorStrings;
    void identifier;
    void platformIndependent;
    void symbol;
    void text;
    void version;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) TPSGradient *gradient;
@property (nonatomic, readonly) NSArray *gradientColorStrings;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool platformIndependent;
@property (nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)gradient;
- (id)gradientColorStrings;
- (long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 text:(id)arg3 symbol:(id)arg4 platformIndependent:(bool)arg5 gradientColorStrings:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)platformIndependent;
- (id)symbol;
- (id)text;
- (id)version;

@end
