
@interface SITracingObjcLifetimeSpan : NSObject {
    struct SITracingSpan { 
        unsigned long long traceid; 
        unsigned long long spanid; 
        unsigned long long parentid; 
        int queryid; 
        BOOL kind; 
        char *what; 
    }  _mySpan;
}

- (void)dealloc;
- (id)init:(struct SITracingSpan { unsigned long long x1; unsigned long long x2; unsigned long long x3; int x4; BOOL x5; char *x6; })arg1 kind:(BOOL)arg2 what:(const char *)arg3;

@end
