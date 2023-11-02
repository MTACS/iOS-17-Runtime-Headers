
@interface VNRecognizedPoints3DObservation : VNObservation {
    VNRecognizedPoints3DSpecifier * _specifier;
}

@property (readonly, copy) NSArray *availableGroupKeys;
@property (readonly, copy) NSArray *availableKeys;
@property (nonatomic, readonly) VNRecognizedPoints3DSpecifier *recognizedPointsSpecifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableGroupKeys;
- (id)availableKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 keypointsReturningObject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)recognizedPointForKey:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsSpecifier;
- (id)vn_cloneObject;

@end
