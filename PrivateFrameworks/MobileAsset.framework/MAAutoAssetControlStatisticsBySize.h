
@interface MAAutoAssetControlStatisticsBySize : NSObject <NSSecureCoding> {
    long long  _fullAssets;
    long long  _fullBytes;
    long long  _patchedAssets;
    long long  _patchedBytes;
}

@property (nonatomic) long long fullAssets;
@property (nonatomic) long long fullBytes;
@property (nonatomic) long long patchedAssets;
@property (nonatomic) long long patchedBytes;

+ (bool)supportsSecureCoding;

- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fullAssets;
- (long long)fullBytes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialValue:(long long)arg1;
- (long long)patchedAssets;
- (long long)patchedBytes;
- (void)setFullAssets:(long long)arg1;
- (void)setFullBytes:(long long)arg1;
- (void)setPatchedAssets:(long long)arg1;
- (void)setPatchedBytes:(long long)arg1;
- (id)summary;

@end
