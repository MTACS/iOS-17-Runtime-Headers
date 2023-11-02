
@interface _LSAppLinkPlugIn : NSObject {
    NSURLComponents * _URLComponents;
    unsigned long long  _limit;
    _LSAppLinkOpenState * _state;
}

@property (retain) NSURLComponents *URLComponents;
@property unsigned long long limit;
@property (retain) _LSAppLinkOpenState *state;

+ (bool)canHandleURLComponents:(id)arg1;
+ (id)plugInClasses;

- (void).cxx_destruct;
- (id)URLComponents;
- (id)appLinksWithContext:(struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (void)setState:(id)arg1;
- (void)setURLComponents:(id)arg1;
- (id)state;

@end
