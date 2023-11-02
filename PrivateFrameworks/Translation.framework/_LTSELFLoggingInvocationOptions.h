
@interface _LTSELFLoggingInvocationOptions : NSObject <NSSecureCoding> {
    long long  _inputMode;
    long long  _invocationType;
    long long  _task;
    _LTSELFLoggingTranslateAppContext * _translateAppContext;
}

@property (nonatomic, readonly) long long inputMode;
@property (nonatomic, readonly) long long invocationType;
@property (nonatomic, readonly) long long task;
@property (nonatomic, readonly, retain) _LTSELFLoggingTranslateAppContext *translateAppContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(long long)arg1 inputMode:(long long)arg2 invocationType:(long long)arg3 translateAppContext:(id)arg4;
- (long long)inputMode;
- (long long)invocationType;
- (long long)task;
- (id)translateAppContext;

@end
