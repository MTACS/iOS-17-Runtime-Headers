
@interface _MFMailRecipientTextField : UITextField {
    bool  _isShowingDictationPlaceholder;
}

@property (nonatomic, readonly) bool isShowingDictationPlaceholder;

- (void)_handleKeyUIEvent:(id)arg1;
- (id)_previousKeyResponder;
- (id)customOverlayContainer;
- (id)insertDictationResultPlaceholder;
- (bool)isShowingDictationPlaceholder;
- (void)paste:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;

@end
