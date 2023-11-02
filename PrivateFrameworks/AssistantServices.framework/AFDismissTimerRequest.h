
@interface AFDismissTimerRequest : AFSiriRequest {
    NSArray * _timerURLs;
}

@property (nonatomic, copy) NSArray *timerURLs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimerURLs:(id)arg1;
- (id)timerURLs;

@end
