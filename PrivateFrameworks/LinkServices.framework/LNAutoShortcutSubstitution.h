
@interface LNAutoShortcutSubstitution : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    NSArray * _basePhraseTemplateSubstitutions;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly, copy) NSArray *basePhraseTemplateSubstitutions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)basePhraseTemplateSubstitutions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionIdentifier:(id)arg1 basePhraseTemplateSubstitutions:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
