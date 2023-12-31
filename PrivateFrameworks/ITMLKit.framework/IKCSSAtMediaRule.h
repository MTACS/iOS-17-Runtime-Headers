
@interface IKCSSAtMediaRule : IKCSSRule <NSCopying> {
    IKCSSMediaQuery * _mediaQuery;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _queryRange;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } queryRange;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithMediaQuery:(id)arg1;
- (id)mediaQuery;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })queryRange;
- (void)setQueryRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
