
@interface IKCSSParseDeclarationList : IKCSSParseBlock {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  __range;
}

- (id)description;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
