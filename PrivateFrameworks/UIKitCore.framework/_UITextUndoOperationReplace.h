
@interface _UITextUndoOperationReplace : _UIUndoTextOperation {
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
}

- (void).cxx_destruct;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inputController:(id)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)undoRedo;

@end
