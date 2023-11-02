
@interface ENUITextRange : UITextRange {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)rangeWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

- (id)end;
- (bool)isEmpty;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)start;

@end
