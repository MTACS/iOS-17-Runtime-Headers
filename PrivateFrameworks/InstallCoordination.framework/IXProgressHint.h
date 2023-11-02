
@interface IXProgressHint : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _compressedAppAssetSizeInBytes;
    NSNumber * _filesInAppAssetCount;
    NSNumber * _installingPhaseProportion;
    NSNumber * _loadingPhaseProportion;
    NSNumber * _postProcessingPhaseProportion;
    NSNumber * _totalExpectedEssentialAssetSizeInBytes;
    NSNumber * _totalODRAssetSizeInBytes;
    NSNumber * _uncompressedAppAssetSizeInBytes;
}

@property (nonatomic, retain) NSNumber *compressedAppAssetSizeInBytes;
@property (nonatomic, retain) NSNumber *filesInAppAssetCount;
@property (nonatomic, readonly) NSNumber *installingPhaseProportion;
@property (nonatomic, readonly) NSNumber *loadingPhaseProportion;
@property (nonatomic, readonly) NSNumber *postProcessingPhaseProportion;
@property (nonatomic, readonly, copy) NSDictionary *progressProportionsDictionaryForLaunchServices;
@property (nonatomic, retain) NSNumber *totalExpectedEssentialAssetSizeInBytes;
@property (nonatomic, retain) NSNumber *totalODRAssetSizeInBytes;
@property (nonatomic, retain) NSNumber *uncompressedAppAssetSizeInBytes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compressedAppAssetSizeInBytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filesInAppAssetCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)installingPhaseProportion;
- (bool)isEqual:(id)arg1;
- (id)loadingPhaseProportion;
- (id)postProcessingPhaseProportion;
- (id)progressProportionsDictionaryForLaunchServices;
- (void)setCompressedAppAssetSizeInBytes:(id)arg1;
- (void)setFilesInAppAssetCount:(id)arg1;
- (bool)setPhaseProportionsForLoadingPhase:(id)arg1 installingPhase:(id)arg2 postProcessingPhase:(id)arg3 error:(id*)arg4;
- (void)setTotalExpectedEssentialAssetSizeInBytes:(id)arg1;
- (void)setTotalODRAssetSizeInBytes:(id)arg1;
- (void)setUncompressedAppAssetSizeInBytes:(id)arg1;
- (id)totalExpectedEssentialAssetSizeInBytes;
- (id)totalODRAssetSizeInBytes;
- (id)uncompressedAppAssetSizeInBytes;

@end
