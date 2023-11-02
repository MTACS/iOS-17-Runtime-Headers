
@interface FeatureExtractorConfig : NSObject {
    void cmvnMinWindowLength;
    void cmvnSlidingWindowLength;
    void downSampleStride;
    void nnetIntakeFeatureLength;
    void nnetVectorSize;
    void spliceLeftContext;
    void spliceRightContext;
}

@property (nonatomic) long long cmvnMinWindowLength;
@property (nonatomic) long long cmvnSlidingWindowLength;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long downSampleStride;
@property (nonatomic) long long nnetIntakeFeatureLength;
@property (nonatomic) long long nnetVectorSize;
@property (nonatomic) long long spliceLeftContext;
@property (nonatomic) long long spliceRightContext;

- (long long)cmvnMinWindowLength;
- (long long)cmvnSlidingWindowLength;
- (id)description;
- (long long)downSampleStride;
- (id)init;
- (long long)nnetIntakeFeatureLength;
- (long long)nnetVectorSize;
- (void)setCmvnMinWindowLength:(long long)arg1;
- (void)setCmvnSlidingWindowLength:(long long)arg1;
- (void)setDownSampleStride:(long long)arg1;
- (void)setNnetIntakeFeatureLength:(long long)arg1;
- (void)setNnetVectorSize:(long long)arg1;
- (void)setSpliceLeftContext:(long long)arg1;
- (void)setSpliceRightContext:(long long)arg1;
- (long long)spliceLeftContext;
- (long long)spliceRightContext;

@end
