
@protocol FBKBugFormEditorDelegate <NSObject>

@required

- (void)answerDidChangeForQuestion:(FBKQuestion *)arg1;
- (void)editorDidDismissForQuestion:(FBKQuestion *)arg1;

@end
