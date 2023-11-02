
@interface APUIAppSuggestionView : APUISuggestionView {
    NSString * _appBundleId;
    APUIAppIconDataSource * _dataSource;
    UITapGestureRecognizer * _tapRecognizer;
}

- (void).cxx_destruct;
- (void)_setAppWithBundleId:(id)arg1 reason:(id)arg2;
- (void)_tapRecognized:(id)arg1;
- (void)layoutSuggestion:(id)arg1;

@end
