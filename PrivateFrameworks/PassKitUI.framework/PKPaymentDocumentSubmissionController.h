
@interface PKPaymentDocumentSubmissionController : NSObject {
    UIImage * _backID;
    long long  _context;
    UIViewController<PKPaymentDocumentSubmissionControllerDelegate> * _delegate;
    unsigned long long  _featureIdentifier;
    UIImage * _frontID;
    NSBundle * _localizationBundle;
    NSString * _preferredLanguage;
    PKDocumentRequest * _selectedDocument;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    long long  _side;
    long long  _state;
}

@property (nonatomic, retain) UIImage *backID;
@property (nonatomic) long long context;
@property (nonatomic) UIViewController<PKPaymentDocumentSubmissionControllerDelegate> *delegate;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, retain) UIImage *frontID;
@property (nonatomic, readonly) NSBundle *localizationBundle;
@property (nonatomic, readonly) NSString *preferredLanguage;
@property (nonatomic, retain) PKDocumentRequest *selectedDocument;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (nonatomic) long long side;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)backID;
- (void)captureFailedWithError:(id)arg1;
- (void)capturedImage:(id)arg1;
- (void)contactApplePressed;
- (long long)context;
- (id)delegate;
- (unsigned long long)featureIdentifier;
- (id)frontID;
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 acceptableDocuments:(id)arg3 featureIdentifier:(unsigned long long)arg4 localizationBundle:(id)arg5 preferredLanguage:(id)arg6;
- (id)localizationBundle;
- (id)nextViewController;
- (id)preferredLanguage;
- (void)reportAnalyticsEvent:(id)arg1 pageTag:(id)arg2;
- (void)scanAgain;
- (id)selectedDocument;
- (void)setBackID:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setFrontID:(id)arg1;
- (void)setSelectedDocument:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setSide:(long long)arg1;
- (void)setState:(long long)arg1;
- (id)setupDelegate;
- (long long)side;
- (long long)state;
- (void)stateChanged;
- (void)terminateSetupFlow;
- (void)tryUploadAgain;
- (void)uploadID;
- (void)userApprovedCapturedID;
- (void)userRejectedCapturedID;
- (void)userWantsToCancel;
- (void)userWantsToContinue;

@end
