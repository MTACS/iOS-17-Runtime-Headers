
@interface CHContextualCharacterTransliteration : NSObject {
    NSString * _confusion;
    NSString * _correction;
    NSArray * _locales;
    NSCharacterSet * _requiredLeftContext;
    NSCharacterSet * _requiredRightContext;
    bool  _requiresLexiconMatch;
    bool  _shouldPreserveOriginal;
}

@property (nonatomic, readonly, copy) NSString *confusion;
@property (nonatomic, readonly, copy) NSString *correction;
@property (nonatomic, readonly) NSArray *locales;
@property (nonatomic, readonly) NSCharacterSet *requiredLeftContext;
@property (nonatomic, readonly) NSCharacterSet *requiredRightContext;
@property (nonatomic, readonly) bool requiresLexiconMatch;
@property (nonatomic, readonly) bool shouldPreserveOriginal;

- (void).cxx_destruct;
- (id)confusion;
- (id)correction;
- (id)initWithConfusion:(id)arg1 correction:(id)arg2 locales:(id)arg3 leftContext:(id)arg4 rightContext:(id)arg5 requiresLexiconMatch:(bool)arg6 shouldPreserveOriginal:(bool)arg7;
- (bool)isValidForLocale:(id)arg1;
- (id)locales;
- (bool)meetsContextRequirementWithLeftContext:(id)arg1 rightContext:(id)arg2;
- (id)requiredLeftContext;
- (id)requiredRightContext;
- (bool)requiresLexiconMatch;
- (bool)shouldPreserveOriginal;

@end
