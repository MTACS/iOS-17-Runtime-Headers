
@interface MAAutoAssetInfoStaged : NSObject <NSSecureCoding> {
    unsigned long long  _assetsSuccessfullyStaged;
    long long  _totalStagedBytes;
}

@property (nonatomic, readonly) unsigned long long assetsSuccessfullyStaged;
@property (nonatomic, readonly) long long totalStagedBytes;

+ (bool)supportsSecureCoding;

- (unsigned long long)assetsSuccessfullyStaged;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTotalStagedBytes:(long long)arg1 withAssetsSuccessfullyStaged:(unsigned long long)arg2;
- (id)summary;
- (long long)totalStagedBytes;

@end
