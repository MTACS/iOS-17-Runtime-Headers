
@interface SHSignatureAlignment : NSObject <NSCopying, NSSecureCoding> {
    float  _alignmentConfidence;
    SHRange * _queryTimeRange;
    SHRange * _referenceTimeRange;
}

@property (nonatomic, readonly) float alignmentConfidence;
@property (nonatomic, readonly) SHRange *queryTimeRange;
@property (nonatomic, readonly) SHRange *referenceTimeRange;

+ (id)mergedAlignments:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)alignmentConfidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryRange:(id)arg1 referenceRange:(id)arg2 alignmentConfidence:(float)arg3;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)queryTimeRange;
- (id)referenceTimeRange;
- (id)serializedRepresentation;

@end
