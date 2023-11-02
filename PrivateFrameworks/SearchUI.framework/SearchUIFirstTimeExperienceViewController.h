
@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate> {
    NSString * _bundleIdentifier;
    NSString * _continueButtonTitle;
    <SearchUIFirstTimeExperienceDelegate> * _delegate;
    NSString * _explanationText;
    NSString * _learnMoreText;
    NSArray * _supportedDomains;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *continueButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SearchUIFirstTimeExperienceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *explanationText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *learnMoreText;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedDomains;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)bundleIdentifier;
- (void)continueButtonPressed;
- (id)continueButtonTitle;
- (id)delegate;
- (id)explanationText;
- (id)initWithDomains:(id)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5;
- (id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (id)learnMoreText;
- (void)makeViews;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContinueButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExplanationText:(id)arg1;
- (void)setLearnMoreText:(id)arg1;
- (void)setSupportedDomains:(id)arg1;
- (void)showPrivacyView;
- (id)supportedDomains;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;

@end
