
@interface VNRecognizedPointsObservation : VNObservation {
    VNRecognizedPointsSpecifier * _specifier;
}

@property (readonly, copy) NSArray *availableGroupKeys;
@property (readonly, copy) NSArray *availableKeys;
@property (readonly) NSNumber *groupIdentifier;
@property (readonly) VNRecognizedPointsSpecifier *recognizedPointsSpecifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAllJointsToPath:(struct CGPath { }*)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)availableGroupKeys;
- (id)availableKeys;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 keypointReturningObservation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keypointsMultiArrayAndReturnError:(id*)arg1;
- (id)recognizedPointForKey:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsSpecifier;
- (id)vn_cloneObject;

@end
