
@interface HUAccessoryDiagnosticsConsentViewController : UIViewController <UITextViewDelegate> {
    id /* block */  _completionHandler;
    long long  _consentTextVersion;
    UITextView * _descriptionTextView;
    NSString * _manufacturer;
    NSURL * _privacyPolicyURL;
    UIButton * _submitButton;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) long long consentTextVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextView *descriptionTextView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSURL *privacyPolicyURL;
@property (nonatomic, retain) UIButton *submitButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)cancelSubmission;
- (id /* block */)completionHandler;
- (long long)consentTextVersion;
- (id)descriptionTextView;
- (id)initWithItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)manufacturer;
- (id)privacyPolicyURL;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConsentTextVersion:(long long)arg1;
- (void)setDescriptionTextView:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setPrivacyPolicyURL:(id)arg1;
- (void)setSubmitButton:(id)arg1;
- (id)submitButton;
- (void)submitLog;
- (void)viewDidLoad;

@end
