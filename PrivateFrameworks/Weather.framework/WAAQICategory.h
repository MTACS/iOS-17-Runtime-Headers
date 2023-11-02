
@interface WAAQICategory : NSObject {
    UIColor * _color;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (id)color;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 color:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
