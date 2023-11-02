
@interface VNRecognizedBodyPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray * _orderedPersonKeypoints;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableGroupKeys;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVCPPersonObservation:(id)arg1 originatingRequestSpecifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id*)arg1;

@end
