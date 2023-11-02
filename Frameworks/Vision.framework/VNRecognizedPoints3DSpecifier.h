
@interface VNRecognizedPoints3DSpecifier : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _allRecognizedPoints;
    VNRequestSpecifier * _originatingRequestSpecifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableGroupKeys;
- (id)availableKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 allRecognizedPoints:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)originatingRequestSpecifier;
- (id)pointKeyGroupLabelsMapping;
- (id)recognizedPointForKey:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id*)arg2;

@end
