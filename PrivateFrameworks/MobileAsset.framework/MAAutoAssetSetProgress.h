
@interface MAAutoAssetSetProgress : NSObject <NSSecureCoding> {
    long long  _downloadedAssetCount;
    double  _expectedTimeRemainingSecs;
    bool  _isStalled;
    long long  _remainingAssetCount;
    long long  _totalExpectedBytes;
    long long  _totalWrittenBytes;
}

@property (nonatomic) long long downloadedAssetCount;
@property (nonatomic) double expectedTimeRemainingSecs;
@property (nonatomic) bool isStalled;
@property (nonatomic) long long remainingAssetCount;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) long long totalWrittenBytes;

+ (bool)supportsSecureCoding;

- (id)copy;
- (id)description;
- (long long)downloadedAssetCount;
- (void)encodeWithCoder:(id)arg1;
- (double)expectedTimeRemainingSecs;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStalled;
- (long long)remainingAssetCount;
- (void)setDownloadedAssetCount:(long long)arg1;
- (void)setExpectedTimeRemainingSecs:(double)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setRemainingAssetCount:(long long)arg1;
- (void)setTotalExpectedBytes:(long long)arg1;
- (void)setTotalWrittenBytes:(long long)arg1;
- (id)summary;
- (long long)totalExpectedBytes;
- (long long)totalWrittenBytes;

@end
