
@interface CKXArrayProxyBase : CKXProxyBase {
    struct { 
        unsigned long long structToken; 
        unsigned long long listReferenceToken; 
        unsigned long long page; 
        unsigned long long offset; 
    }  _listInstance;
}

@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } listInstance;

- (void)associateWithListInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })listInstance;
- (void)reset;

@end
