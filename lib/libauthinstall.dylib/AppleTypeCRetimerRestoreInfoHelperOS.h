
@interface AppleTypeCRetimerRestoreInfoHelperOS : NSObject {
    void * _logContext;
    int (* _logFunction;
    bool  _verbose;
}

- (id)initWithOptions:(id)arg1 logFunction:(int (*)arg2 logContext:(void*)arg3;
- (void)log:(id)arg1;
- (void)logInternal:(id)arg1 arguments:(char *)arg2;
- (void)verboseLog:(id)arg1;

@end
