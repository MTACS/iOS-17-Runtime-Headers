
@interface _SFTranslationTargetLocaleAlertController : UIAlertController <_SFTranslationTargetLocaleAlertControllerDelegate> {
    id /* block */  _analyticsHandler;
    <_SFTranslationTargetLocaleAlertControllerDelegate> * _delegate;
    NSMutableDictionary * _localeIdentifierToAlertActionMap;
    WBSTranslationContext * _translationContext;
}

@property (nonatomic, copy) id /* block */ analyticsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFTranslationTargetLocaleAlertControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *localeIdentifierToAlertActionMap;
@property (readonly) Class superclass;

+ (id)translationAlertControllerWithDelegate:(id)arg1 localeIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (void)_setUpWithLocaleIdentifiers:(id)arg1;
- (void)_translationAvailabilityDidChange:(id)arg1;
- (id /* block */)analyticsHandler;
- (void)configurePopoverWithSourceInfo:(id)arg1;
- (id)delegate;
- (id)initWithTranslationContext:(id)arg1;
- (id)localeIdentifierToAlertActionMap;
- (void)setAnalyticsHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocaleIdentifierToAlertActionMap:(id)arg1;
- (void)translationAlertController:(id)arg1 didSelectLocale:(id)arg2;
- (void)translationAlertController:(id)arg1 validateTargetLocale:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)translationAvailabilityDidChange;

@end
