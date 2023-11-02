
@interface UVExceptionError : NSError {
    NSException * _exception;
}

@property (nonatomic, readonly) NSException *exception;

- (void).cxx_destruct;
- (id)exception;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)initWithException:(id)arg1;

@end
