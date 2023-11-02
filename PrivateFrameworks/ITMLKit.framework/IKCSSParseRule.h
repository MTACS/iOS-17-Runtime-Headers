
@interface IKCSSParseRule : IKCSSParseObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  __endRange;
    IKCSSParseBlock * _block;
    IKArray * _prelude;
}

@property (setter=_setEndRange:, nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } _endRange;
@property (nonatomic, retain) IKCSSParseBlock *block;
@property (nonatomic, retain) IKArray *prelude;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_endRange;
- (void)_setEndRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)block;
- (id)description;
- (id)init;
- (id)prelude;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setBlock:(id)arg1;
- (void)setPrelude:(id)arg1;

@end
