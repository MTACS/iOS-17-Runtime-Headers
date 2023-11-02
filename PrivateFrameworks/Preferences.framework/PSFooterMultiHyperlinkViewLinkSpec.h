
@interface PSFooterMultiHyperlinkViewLinkSpec : NSObject {
    NSURL * _URL;
    SEL  _action;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _linkRange;
    id  _target;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) SEL action;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property (nonatomic) id target;

+ (id)specWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)specWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (SEL)action;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (void)setAction:(SEL)arg1;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTarget:(id)arg1;
- (void)setURL:(id)arg1;
- (id)target;

@end
