
@interface CACDictationRecognizerModeOverlayManager : CACSimpleContentViewManager {
    <CACDictationRecognizerModeOverlayManagerDelegate> * _delegate;
}

@property (nonatomic) <CACDictationRecognizerModeOverlayManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (bool)isOverlay;
- (void)setDelegate:(id)arg1;
- (void)showOverlayForDictiationRecognizerMode;

@end
