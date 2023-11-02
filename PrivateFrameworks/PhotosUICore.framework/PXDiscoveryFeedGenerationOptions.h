
@interface PXDiscoveryFeedGenerationOptions : NSObject <NSCopying> {
    unsigned long long  _discoveryRankingMode;
    bool  _usePhotoAnalysisdThroughXPC;
}

@property (nonatomic) unsigned long long discoveryRankingMode;
@property (nonatomic) bool usePhotoAnalysisdThroughXPC;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)discoveryRankingMode;
- (id)init;
- (void)setDiscoveryRankingMode:(unsigned long long)arg1;
- (void)setUsePhotoAnalysisdThroughXPC:(bool)arg1;
- (bool)usePhotoAnalysisdThroughXPC;

@end
