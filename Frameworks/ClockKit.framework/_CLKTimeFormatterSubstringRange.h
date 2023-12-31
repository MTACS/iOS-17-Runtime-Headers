
@interface _CLKTimeFormatterSubstringRange : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)substringFromString:(id)arg1;

@end
