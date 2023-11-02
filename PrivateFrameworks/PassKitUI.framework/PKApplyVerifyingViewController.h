
@interface PKApplyVerifyingViewController : PKApplyCollectionViewController {
    NSString * _actionIdentifierToSubmit;
    double  _minimumDelayNanoSeconds;
    NSDictionary * _odiAttributesDictionaryToSubmit;
    NSSet * _termsIdentifiersToSubmit;
}

- (void).cxx_destruct;
- (void)_updateSubtitleWithAltTextIfNecessary;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 actionIdentifierToSubmit:(id)arg5 termsIdentifiersToSubmit:(id)arg6 odiAttributesDictionaryToSubmit:(id)arg7;
- (id)pageTag;
- (bool)shouldDisplayErrorOnWithdraw;
- (void)viewDidLoad;

@end
