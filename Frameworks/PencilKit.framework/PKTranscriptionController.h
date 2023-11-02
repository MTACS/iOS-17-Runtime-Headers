
@interface PKTranscriptionController : NSObject <PKProgressAlertControllerDelegate> {
    PKAttachmentView * _attachment;
    NSProgress * _currentProgress;
    bool  _didReceiveTranscription;
    bool  _didShowHUD;
    PKProgressAlertController * _progressAlertController;
    PKRecognitionSessionManager * _recognitionManager;
    bool  _shouldCancel;
    PKStrokeSelection * _strokeSelection;
    NSString * _textTranscription;
    int  _transcriptionType;
}

@property (nonatomic) PKAttachmentView *attachment;
@property (nonatomic, retain) NSProgress *currentProgress;
@property (nonatomic) bool didReceiveTranscription;
@property (nonatomic) bool didShowHUD;
@property (nonatomic, retain) PKProgressAlertController *progressAlertController;
@property (nonatomic) PKRecognitionSessionManager *recognitionManager;
@property (nonatomic) bool shouldCancel;
@property (nonatomic, retain) PKStrokeSelection *strokeSelection;
@property (nonatomic, copy) NSString *textTranscription;
@property (nonatomic) int transcriptionType;

- (void).cxx_destruct;
- (id)_fetchTranscriptionWithCompletion:(id /* block */)arg1;
- (void)_hideHUD;
- (void)_progressChanged;
- (void)_showHUDWithProgress:(id)arg1;
- (void)_unregisterProgressObserver;
- (void)alertControllerDidCancel:(id)arg1;
- (id)attachment;
- (void)cancelAndTeardown;
- (id)currentProgress;
- (void)dealloc;
- (bool)didReceiveTranscription;
- (bool)didShowHUD;
- (void)findTranscriptionForType:(int)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithRecognitionManager:(id)arg1 strokeSelection:(id)arg2 attachment:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progressAlertController;
- (id)recognitionManager;
- (void)setAttachment:(id)arg1;
- (void)setCurrentProgress:(id)arg1;
- (void)setDidReceiveTranscription:(bool)arg1;
- (void)setDidShowHUD:(bool)arg1;
- (void)setProgressAlertController:(id)arg1;
- (void)setRecognitionManager:(id)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setStrokeSelection:(id)arg1;
- (void)setTextTranscription:(id)arg1;
- (void)setTranscriptionType:(int)arg1;
- (bool)shouldCancel;
- (id)strokeSelection;
- (void)textInputDidChange:(id)arg1;
- (id)textTranscription;
- (int)transcriptionType;

@end
