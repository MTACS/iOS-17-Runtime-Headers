
@interface PEAdjustmentDataCacheKey : NSObject <NSCopying> {
    double  _adjustmentDate;
    NSString * _localIdentifier;
    bool  _originalAdjustmentData;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 originalAdjustmentData:(bool)arg2;
- (bool)isEqual:(id)arg1;

@end
