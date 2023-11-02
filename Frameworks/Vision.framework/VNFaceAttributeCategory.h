
@interface VNFaceAttributeCategory : NSObject <NSCopying, NSSecureCoding, VNObjectCloning, VNRequestRevisionProviding> {
    NSArray * _allLabelsWithConfidences;
    VNClassificationObservation * _mostLikelyLabel;
    unsigned long long  _requestRevision;
}

@property (nonatomic, copy) NSArray *allLabelsWithConfidences;
@property (nonatomic, copy) VNClassificationObservation *label;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_computeLabel;
- (id)allLabelsWithConfidences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)requestRevision;
- (void)setAllLabelsWithConfidences:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)vn_cloneObject;

@end
