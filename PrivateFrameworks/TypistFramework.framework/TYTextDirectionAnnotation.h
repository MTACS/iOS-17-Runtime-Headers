
@interface TYTextDirectionAnnotation : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long  _textDirection;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) unsigned long long textDirection;

+ (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textDirection:(unsigned long long)arg2;

- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextDirection:(unsigned long long)arg1;
- (unsigned long long)textDirection;

@end
