
@interface _UITextUndoOperationSetAttributes : _UIUndoTextOperation {
    _NSAttributeRun * _attributes;
}

- (void).cxx_destruct;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inputController:(id)arg2;
- (void)undoRedo;

@end
