
@protocol DOCAddTagTextFieldDelegate <NSObject>

@required

- (bool)addTagTextField:(DOCAddTagView *)arg1 userDidCreateTagWithName:(NSString *)arg2;
- (void)addTagTextFieldDidBeginEditing:(DOCAddTagView *)arg1;
- (void)addTagTextFieldDidChange:(DOCAddTagView *)arg1;
- (void)addTagTextFieldDidEndEditing:(DOCAddTagView *)arg1;
- (bool)addTagTextFieldShouldEndEditing:(DOCAddTagView *)arg1;

@end
