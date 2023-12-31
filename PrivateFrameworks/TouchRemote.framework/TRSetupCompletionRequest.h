
@interface TRSetupCompletionRequest : TRRequestMessage {
    bool  _completedSuccessfully;
    long long  _errorCode;
}

@property (nonatomic) bool completedSuccessfully;
@property (nonatomic) long long errorCode;

+ (bool)supportsSecureCoding;

- (bool)completedSuccessfully;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)errorCode;
- (id)initWithCoder:(id)arg1;
- (void)setCompletedSuccessfully:(bool)arg1;
- (void)setErrorCode:(long long)arg1;

@end
