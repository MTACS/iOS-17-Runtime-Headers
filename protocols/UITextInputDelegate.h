
@protocol UITextInputDelegate <NSObject>

@required

- (void)selectionDidChange:(id <UITextInput>)arg1;
- (void)selectionWillChange:(id <UITextInput>)arg1;
- (void)textDidChange:(id <UITextInput>)arg1;
- (void)textWillChange:(id <UITextInput>)arg1;

@end
