
@interface MNNavigationServiceCallback_DidUpdateArrivalInfo : MNNavigationServiceCallbackParameters {
    MNArrivalInfo * _arrivalInfo;
}

@property (nonatomic, retain) MNArrivalInfo *arrivalInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setArrivalInfo:(id)arg1;
- (unsigned long long)type;

@end
