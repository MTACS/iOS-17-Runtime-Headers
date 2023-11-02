
@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier {
    long long  _chirality;
    NSArray * _orderedHandKeypoints;
}

@property (readonly) long long chirality;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableGroupKeys;
- (long long)chirality;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVCPHandObservation:(id)arg1 originatingRequestSpecifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id*)arg1;

@end
