
@interface CTSubscriberAuthRequest : NSObject <NSSecureCoding> {
    CTSubscriberAlgorithm * _algorithm;
}

@property (nonatomic, retain) CTSubscriberAlgorithm *algorithm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)algorithm;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlgorithm:(id)arg1;

@end
