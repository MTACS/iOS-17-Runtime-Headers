
@interface PXSettingsHighlightEstimatesExportViewController : UIViewController <MFMailComposeViewControllerDelegate> {
    bool  _exportHighlightEstimatesOnViewDidAppear;
    NSDictionary * _highlightEstimatesDictionary;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool exportHighlightEstimatesOnViewDidAppear;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *highlightEstimatesDictionary;
@property (readonly) Class superclass;
@property (retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_fetchHighlightEstimatesDictionary;
- (void)_sendEmail:(id)arg1;
- (bool)exportHighlightEstimatesOnViewDidAppear;
- (id)highlightEstimatesDictionary;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)setExportHighlightEstimatesOnViewDidAppear:(bool)arg1;
- (void)setHighlightEstimatesDictionary:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
