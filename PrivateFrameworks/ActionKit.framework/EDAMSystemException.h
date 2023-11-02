
@interface EDAMSystemException : FATException {
    NSNumber * _errorCode;
    NSString * _message;
    NSNumber * _rateLimitDuration;
}

@property (nonatomic, retain) NSNumber *errorCode;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSNumber *rateLimitDuration;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)errorCode;
- (id)message;
- (id)rateLimitDuration;
- (void)setErrorCode:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRateLimitDuration:(id)arg1;

@end
