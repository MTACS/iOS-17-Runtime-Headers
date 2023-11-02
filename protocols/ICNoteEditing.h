
@protocol ICNoteEditing <NSObject>

@required

- (void)performFindInNote:(id)arg1;
- (void)performReplaceInNote:(id)arg1;
- (bool)wantsToRemainFirstResponder;

@end
