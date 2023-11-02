
@interface DKCloudUploadViewController : OBSetupAssistantProgressController {
    id /* block */  _cancelBlock;
    NSDateComponentsFormatter * _durationFormatter;
    bool  _showUploadFailureAlert;
    id /* block */  _skipBlock;
    DKCloudUploadResults * _uploadResults;
}

@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, retain) NSDateComponentsFormatter *durationFormatter;
@property (nonatomic) bool showUploadFailureAlert;
@property (nonatomic, copy) id /* block */ skipBlock;
@property (nonatomic) DKCloudUploadResults *uploadResults;

- (void).cxx_destruct;
- (void)_cancelTapped:(id)arg1;
- (void)_showUploadFailureAlertForResults:(id)arg1;
- (void)_skipTapped:(id)arg1;
- (id)_timeRemainingString:(double)arg1;
- (id /* block */)cancelBlock;
- (id)durationFormatter;
- (id)init;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setDurationFormatter:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setShowUploadFailureAlert:(bool)arg1;
- (void)setSkipBlock:(id /* block */)arg1;
- (void)setUploadResults:(id)arg1;
- (bool)showUploadFailureAlert;
- (id /* block */)skipBlock;
- (void)uploadDidComplete:(id)arg1;
- (void)uploadProgress:(float)arg1 withTimeRemaining:(double)arg2;
- (id)uploadResults;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
