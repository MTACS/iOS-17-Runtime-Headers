
@protocol UITextDroppable <UITextInput, UITextPasteConfigurationSupporting>

@required

- (bool)isTextDropActive;
- (void)setTextDropDelegate:(id <UITextDropDelegate>)arg1;
- (<UITextDropDelegate> *)textDropDelegate;
- (UIDropInteraction *)textDropInteraction;

@end
