
@interface SVXServiceCommandResult : NSObject <NSCopying> {
    AceObject<SAAceCommand> * _command;
    long long  _failureErrorCode;
    NSString * _failureReason;
    NSArray * _results;
    long long  _type;
}

+ (id)resultFailureWithErrorCode:(long long)arg1 reason:(id)arg2;
+ (id)resultIgnored;
+ (id)resultSuccess;
+ (id)resultWithCommand:(id)arg1;
+ (id)resultWithResults:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 failureErrorCode:(long long)arg2 failureReason:(id)arg3 command:(id)arg4 results:(id)arg5;
- (id)_optimalResult;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)handleResultUsingIgnoredBlock:(id /* block */)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3 commandBlock:(id /* block */)arg4;

@end
