
@interface CRXUDeferredTrace : NSObject {
    unsigned long long  _arg1;
    unsigned long long  _arg2;
    unsigned long long  _arg3;
    unsigned long long  _arg4;
    unsigned long long  _code;
}

@property unsigned long long arg1;
@property unsigned long long arg2;
@property unsigned long long arg3;
@property unsigned long long arg4;
@property unsigned long long code;

+ (id)deferredTraceWithCode:(unsigned long long)arg1 arg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5;

- (unsigned long long)arg1;
- (unsigned long long)arg2;
- (unsigned long long)arg3;
- (unsigned long long)arg4;
- (unsigned long long)code;
- (void)dealloc;
- (id)initWithCode:(unsigned long long)arg1 arg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5;
- (void)setArg1:(unsigned long long)arg1;
- (void)setArg2:(unsigned long long)arg1;
- (void)setArg3:(unsigned long long)arg1;
- (void)setArg4:(unsigned long long)arg1;
- (void)setCode:(unsigned long long)arg1;

@end
