
@interface PXAssistantStepContext : PXObservable {
    NSString * _customSecondButtonTitle;
    bool  _firstButtonEnabled;
    NSString * _firstButtonTitle;
    long long  _firstButtonType;
    NSString * _identifier;
    bool  _secondButtonEnabled;
    long long  _secondButtonType;
    bool  _useTransparentBarAppearance;
    UIViewController * _viewController;
}

@property (nonatomic, readonly, copy) NSString *customSecondButtonTitle;
@property (nonatomic, readonly) bool firstButtonEnabled;
@property (nonatomic, readonly, copy) NSString *firstButtonTitle;
@property (nonatomic, readonly) long long firstButtonType;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool secondButtonEnabled;
@property (nonatomic, readonly) long long secondButtonType;
@property (nonatomic, readonly) bool useTransparentBarAppearance;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)customSecondButtonTitle;
- (bool)firstButtonEnabled;
- (id)firstButtonTitle;
- (long long)firstButtonType;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 viewController:(id)arg2;
- (void)performChanges:(id /* block */)arg1;
- (bool)secondButtonEnabled;
- (long long)secondButtonType;
- (void)setCustomSecondButtonTitle:(id)arg1;
- (void)setFirstButtonEnabled:(bool)arg1;
- (void)setFirstButtonTitle:(id)arg1;
- (void)setFirstButtonType:(long long)arg1;
- (void)setSecondButtonEnabled:(bool)arg1;
- (void)setSecondButtonType:(long long)arg1;
- (void)setUseTransparentBarAppearance:(bool)arg1;
- (bool)useTransparentBarAppearance;
- (id)viewController;

@end
