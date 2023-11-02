
@interface VNRecognizedAnimalBodyPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray * _orderedAnimalKeypoints;
}

+ (id)_stringRepresentationForRequestRevision:(unsigned long long)arg1 petsKeypointType:(int)arg2 error:(id*)arg3;
+ (id)supportedAnimalPoseKeypointsRev1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableGroupKeys;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVCPPetsObservation:(id)arg1 originatingRequestSpecifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)pointKeyGroupLabelsMapping;

@end
