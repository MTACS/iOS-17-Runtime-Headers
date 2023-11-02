
@interface FBKSForm_FrameworkPrivateName : NSObject {
    void answers;
    void authenticationMethod;
    void identifier;
}

@property (nonatomic, readonly) NSData *asJSON;
@property (nonatomic) long long authenticationMethod;
@property (nonatomic, copy) NSString *identifier;

+ (id)fromJSONWithData:(id)arg1;

- (void).cxx_destruct;
- (id)asFBAURLSchemeWithIsSurvey:(bool)arg1;
- (id)asJSON;
- (long long)authenticationMethod;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)prefillWithQuestion:(id)arg1 answer:(id)arg2;
- (void)setAuthenticationMethod:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQuestionsWithNsMutableDict:(id)arg1;

@end
