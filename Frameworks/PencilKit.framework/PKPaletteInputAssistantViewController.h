
@interface PKPaletteInputAssistantViewController : UIViewController <PKDrawingPaletteInputAssistantViewStateObserver> {
    PKDrawingPaletteInputAssistantView * _inputAssistantView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKDrawingPaletteInputAssistantView *inputAssistantView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_preferredContentSize;
- (void)_updateUI;
- (id)inputAssistantView;
- (void)paletteInputAssistantViewDidChangeViewState:(id)arg1;
- (void)setInputAssistantView:(id)arg1;
- (void)viewDidLoad;

@end
