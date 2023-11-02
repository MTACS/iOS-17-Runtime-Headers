
@interface MNNavigationServiceCallback_DidReceiveRoutingServiceError : MNNavigationServiceCallbackParameters {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)setError:(id)arg1;
- (unsigned long long)type;

@end
