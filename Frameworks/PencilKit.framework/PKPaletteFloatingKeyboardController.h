
@interface PKPaletteFloatingKeyboardController : NSObject {
    UIMenu * _cachedKeyboardMenu;
    <PKPaletteFloatingKeyboardControllerDelegate> * _delegate;
    UIKeyboardInputMode * _emojiInputMode;
    double  _latestUserInitiatedInputModeChangeTimestamp;
    bool  _presentingKeyboard;
    bool  _processingReloadInputViews;
    bool  _updatingCurrentInputMode;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeInputMode;
- (id)init;

@end
