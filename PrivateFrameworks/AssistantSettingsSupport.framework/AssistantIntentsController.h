
@interface AssistantIntentsController : PSListController <SiriAppsFooterViewDelegate> {
    NSArray * _intentsSpecifiers;
}

@property (nonatomic, retain) NSArray *intentsSpecifiers;

- (void).cxx_destruct;
- (void)_fetchIntentsSpecifiersWithCompletion:(id /* block */)arg1;
- (id)accesssForSpecifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)intentsSpecifiers;
- (void)setAccess:(id)arg1 forSpecifier:(id)arg2;
- (void)setIntentsSpecifiers:(id)arg1;
- (id)specifiers;
- (void)tccPreferencesChanged;
- (void)viewDidTapLearnMore:(id)arg1;

@end
