
@interface WBSFormAutoFillCorrectionManager : NSObject {
    WBSFormAutoFillClassificationToCorrectionsTransformer * _classificationToCorrectionsTransformer;
    <WBSFormAutoFillCorrectionsStore> * _correctionsStore;
    <WBSFormAutoFillCorrectionManagerDelegate> * _delegate;
}

@property (nonatomic) <WBSFormAutoFillCorrectionManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_feedbackProcessor;
- (void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3;
- (id)delegate;
- (void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithCorrectionsStore:(id)arg1;
- (void)setCorrectionSet:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
