
@interface PXStoryExportVideoOptions : NSObject <NSCopying> {
    NSNumber * _averageBitratePerSecond;
    unsigned long long  _codec;
    unsigned long long  _frameRate;
    PXExtendedTraitCollectionSnapshot * _fullSizePlayerExtendedTraitCollectionSnapshot;
    bool  _prefersExportLayoutMatchesPlayback;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
    double  _scale;
}

@property (nonatomic, retain) NSNumber *averageBitratePerSecond;
@property (nonatomic) unsigned long long codec;
@property (nonatomic) unsigned long long frameRate;
@property (nonatomic, retain) PXExtendedTraitCollectionSnapshot *fullSizePlayerExtendedTraitCollectionSnapshot;
@property (nonatomic) bool prefersExportLayoutMatchesPlayback;
@property (nonatomic) struct CGSize { double x1; double x2; } resolution;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } resolutionInPixels;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)averageBitratePerSecond;
- (unsigned long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)frameRate;
- (id)fullSizePlayerExtendedTraitCollectionSnapshot;
- (id)init;
- (bool)prefersExportLayoutMatchesPlayback;
- (struct CGSize { double x1; double x2; })resolution;
- (struct CGSize { double x1; double x2; })resolutionInPixels;
- (double)scale;
- (void)setAverageBitratePerSecond:(id)arg1;
- (void)setCodec:(unsigned long long)arg1;
- (void)setFrameRate:(unsigned long long)arg1;
- (void)setFullSizePlayerExtendedTraitCollectionSnapshot:(id)arg1;
- (void)setPrefersExportLayoutMatchesPlayback:(bool)arg1;
- (void)setResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;

@end
