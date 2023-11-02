
@interface MNNavigationServiceCallback_DidUpdateMatchedLocation : MNNavigationServiceCallbackParameters {
    MNLocation * _location;
}

@property (nonatomic, retain) MNLocation *location;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (unsigned long long)type;

@end
