
@interface POUserLoginConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _customAssertionRequestBodyClaims;
    NSDictionary * _customAssertionRequestHeaderClaims;
    NSDictionary * _customLoginRequestBodyClaims;
    NSDictionary * _customLoginRequestHeaderClaims;
    NSString * _loginUserName;
}

@property (retain) NSDictionary *customAssertionRequestBodyClaims;
@property (retain) NSDictionary *customAssertionRequestHeaderClaims;
@property (retain) NSDictionary *customLoginRequestBodyClaims;
@property (retain) NSDictionary *customLoginRequestHeaderClaims;
@property (nonatomic, copy) NSString *loginUserName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customAssertionRequestBodyClaims;
- (id)customAssertionRequestHeaderClaims;
- (id)customLoginRequestBodyClaims;
- (id)customLoginRequestHeaderClaims;
- (id)dataRepresentation;
- (id)dataRepresentationForDisplay:(bool)arg1;
- (id)description;
- (id)dictionaryRepresentationForDisplay:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLoginUserName:(id)arg1;
- (id)loginUserName;
- (void)setCustomAssertionRequestBodyClaims:(id)arg1;
- (bool)setCustomAssertionRequestBodyClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomAssertionRequestHeaderClaims:(id)arg1;
- (bool)setCustomAssertionRequestHeaderClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomLoginRequestBodyClaims:(id)arg1;
- (bool)setCustomLoginRequestBodyClaims:(id)arg1 returningError:(id*)arg2;
- (void)setCustomLoginRequestHeaderClaims:(id)arg1;
- (bool)setCustomLoginRequestHeaderClaims:(id)arg1 returningError:(id*)arg2;
- (void)setLoginUserName:(id)arg1;

@end
