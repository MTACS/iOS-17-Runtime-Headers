
@interface CTPlanSignUpDetails : NSObject <NSSecureCoding> {
    NSString * _signUpUrl;
    NSString * _signUpUrlType;
}

@property (nonatomic, retain) NSString *signUpUrl;
@property (nonatomic, retain) NSString *signUpUrlType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignUpUrl:(id)arg1 signUpUrlType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setSignUpUrl:(id)arg1;
- (void)setSignUpUrlType:(id)arg1;
- (id)signUpUrl;
- (id)signUpUrlType;

@end
