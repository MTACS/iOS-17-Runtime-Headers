
@interface LNBasePhraseTemplateSubstitution : NSObject <NSSecureCoding> {
    NSString * _basePhraseTemplate;
    NSArray * _parameterSubstitutions;
}

@property (nonatomic, readonly, copy) NSString *basePhraseTemplate;
@property (nonatomic, readonly, copy) NSArray *parameterSubstitutions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)basePhraseTemplate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBasePhraseTemplate:(id)arg1 parameterSubstitutions:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)parameterSubstitutions;

@end
