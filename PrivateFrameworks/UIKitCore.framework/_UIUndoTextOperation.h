
@interface _UIUndoTextOperation : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _affectedRange;
    UITextInputController * _inputController;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } affectedRange;
@property (nonatomic) UITextInputController *inputController;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })affectedRange;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inputController:(id)arg2;
- (id)inputController;
- (void)setAffectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setInputController:(id)arg1;
- (bool)supportsCoalescing;
- (void)undoRedo;

@end
