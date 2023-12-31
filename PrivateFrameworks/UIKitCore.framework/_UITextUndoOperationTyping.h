
@interface _UITextUndoOperationTyping : _UIUndoTextOperation {
    NSMutableAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
}

- (void).cxx_destruct;
- (bool)coalesceAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 textStorage:(id)arg4;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inputController:(id)arg2 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)supportsCoalescing;
- (void)undoRedo;

@end
