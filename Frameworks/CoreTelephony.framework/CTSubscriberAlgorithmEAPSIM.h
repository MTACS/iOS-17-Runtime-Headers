
@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm {
    NSData * _rand;
}

@property (nonatomic, retain) NSData *rand;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rand;
- (void)setRand:(id)arg1;

@end
