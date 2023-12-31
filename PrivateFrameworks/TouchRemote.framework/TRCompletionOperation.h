
@interface TRCompletionOperation : TROperation {
    long long  _errorCode;
    bool  _success;
}

@property (nonatomic) long long errorCode;
@property (nonatomic) bool success;

- (long long)errorCode;
- (void)execute;
- (void)setErrorCode:(long long)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
