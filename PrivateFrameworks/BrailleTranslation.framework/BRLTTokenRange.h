
@interface BRLTTokenRange : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    long long  _token;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) long long token;

- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 token:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setToken:(long long)arg1;
- (long long)token;

@end
