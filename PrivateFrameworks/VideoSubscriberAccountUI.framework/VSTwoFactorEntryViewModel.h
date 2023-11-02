
@interface VSTwoFactorEntryViewModel : VSCuratedViewModel {
    VSExpressionEvaluator * _buttonExpressionEvaluator;
    NSArray * _buttons;
    <VSTwoFactorEntryViewModelDelegate> * _delegate;
    NSString * _headerText;
    NSString * _originalTwoFacorCode;
    VSTwoFactorEntryTextField * _twoFactorTextField;
}

@property (nonatomic, retain) VSExpressionEvaluator *buttonExpressionEvaluator;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic) <VSTwoFactorEntryViewModelDelegate> *delegate;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, copy) NSString *originalTwoFacorCode;
@property (nonatomic, retain) VSTwoFactorEntryTextField *twoFactorTextField;

- (void).cxx_destruct;
- (void)buttonAtIndexWasPressed:(unsigned long long)arg1;
- (id)buttonExpressionEvaluator;
- (id)buttons;
- (void)configureWithRequest:(id)arg1;
- (id)delegate;
- (id)headerText;
- (id)init;
- (id)originalTwoFacorCode;
- (void)setButtonExpressionEvaluator:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setOriginalTwoFacorCode:(id)arg1;
- (void)setTwoFactorTextField:(id)arg1;
- (id)twoFactorTextField;

@end
