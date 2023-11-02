
@interface CKVMatchingSpanMetadata : NSObject <NSCopying, NSSecureCoding> {
    float  _matchScore;
    CKVMatchingSpanPriorInfo * _priorInfo;
}

@property (nonatomic, readonly) float matchScore;
@property (nonatomic, readonly) CKVMatchingSpanPriorInfo *priorInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchScore:(float)arg1;
- (id)initWithMatchingSpanPriorInfo:(id)arg1 matchScore:(float)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMatchingSpanMetadata:(id)arg1;
- (float)matchScore;
- (id)priorInfo;

@end
