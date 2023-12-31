
@interface ICHandwritingDebugViewController : UIViewController <PKVisualizationManager> {
    UIActivityIndicatorView * _activityIndicator;
    NSArray * _drawings;
    <ICHandwritingDebugDelegate> * _handwritingDebugDelegate;
    NSObject<OS_dispatch_queue> * _recognitionQueue;
    UITextView * _textView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *drawings;
@property (nonatomic) <ICHandwritingDebugDelegate> *handwritingDebugDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recognitionQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)activityIndicator;
- (void)close;
- (id)drawings;
- (id)handwritingDebugDelegate;
- (id)handwritingDebugWindow;
- (id)recognitionQueue;
- (void)refresh;
- (void)setActivityIndicator:(id)arg1;
- (void)setDrawings:(id)arg1;
- (void)setHandwritingDebugDelegate:(id)arg1;
- (void)setRecognitionQueue:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)visualizationManagerDidUpdateRecognitionStatus:(id)arg1;

@end
