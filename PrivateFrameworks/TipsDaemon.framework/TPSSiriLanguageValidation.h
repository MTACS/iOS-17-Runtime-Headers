
@interface TPSSiriLanguageValidation : TPSInclusivityValidation

@property (nonatomic, readonly) NSArray *excludeLanguages;
@property (nonatomic, readonly) NSArray *targetLanguages;

- (id)excludeLanguages;
- (id)initWithTargetLanguages:(id)arg1 excludeLanguages:(id)arg2;
- (id)targetLanguages;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
