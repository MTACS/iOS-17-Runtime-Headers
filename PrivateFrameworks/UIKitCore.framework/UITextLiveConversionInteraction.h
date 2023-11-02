
@interface UITextLiveConversionInteraction : UITextInteraction {
    long long  _panOffset;
    UIResponder<UITextInput> * _textInput;
}

@property (readonly) double pointSize;

- (void).cxx_destruct;
- (id)_liveConversionPanGestureRecognizer;
- (id)_liveConversionTapGestureRecognizer;
- (void)_pan:(id)arg1;
- (void)_tap:(id)arg1;
- (id)initWithTextInput:(id)arg1;
- (double)pointSize;
- (void)willMoveToView:(id)arg1;

@end
