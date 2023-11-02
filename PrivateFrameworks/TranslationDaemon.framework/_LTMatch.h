
@interface _LTMatch : NSObject {
    NSDictionary * _node;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _token;
}

@property (nonatomic, retain) NSDictionary *node;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNode:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)node;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setNode:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
