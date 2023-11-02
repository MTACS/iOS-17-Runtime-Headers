
@interface ICInkToolPickerResponder : UIView {
    <ICInkToolPickerResponderDelegate> * _delegate;
    bool  _preventFirstResponder;
}

@property (nonatomic) <ICInkToolPickerResponderDelegate> *delegate;
@property (nonatomic) bool preventFirstResponder;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (id)inputAssistantItem;
- (bool)preventFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPreventFirstResponder:(bool)arg1;

@end
