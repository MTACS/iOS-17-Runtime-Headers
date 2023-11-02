
@interface TTRNLTextStructuredEventLocation : NSObject {
    long long  _locationType;
    long long  _proximity;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) long long locationType;
@property (nonatomic) long long proximity;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 locationType:(long long)arg2 proximity:(long long)arg3;
- (long long)locationType;
- (long long)proximity;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setLocationType:(long long)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
