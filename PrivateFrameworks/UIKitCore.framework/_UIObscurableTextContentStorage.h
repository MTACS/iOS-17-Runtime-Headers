
@interface _UIObscurableTextContentStorage : NSTextContentStorage {
    _UICascadingTextStorage * _cascadingTextStorage;
    bool  _obscured;
    NSAttributedString * _obscuredAttributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _unobscuredRange;
}

@property (getter=isObscured, nonatomic) bool obscured;
@property (nonatomic, readonly) NSAttributedString *obscuredAttributedString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } unobscuredRange;

- (void).cxx_destruct;
- (void)_invalidateObscuredAttributedString;
- (void)_validateUnobscuredRange;
- (id)attributedString;
- (id)initWithTextStorage:(id)arg1;
- (bool)isObscured;
- (id)obscuredAttributedString;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)setObscured:(bool)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setUnobscuredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })unobscuredRange;

@end
