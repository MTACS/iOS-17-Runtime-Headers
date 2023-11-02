
@interface AVAssetDownloadConfiguration : NSObject <NSSecureCoding> {
    NSData * _artworkData;
    AVURLAsset * _asset;
    NSArray * _auxiliaryContentConfigurations;
    NSURL * _destinationURL;
    bool  _optimizesAuxiliaryContentConfigurations;
    AVAssetDownloadContentConfiguration * _primaryContentConfiguration;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    NSString * _title;
    bool  optimizesAuxiliaryContentConfigurations;
}

@property (nonatomic, copy) NSData *artworkData;
@property (getter=_asset, nonatomic, readonly) AVURLAsset *asset;
@property (getter=_assetTitle, nonatomic, readonly) NSString *assetTitle;
@property (nonatomic, copy) NSArray *auxiliaryContentConfigurations;
@property (getter=_destinationURL, setter=_setDestinationURL:, nonatomic, copy) NSURL *destinationURL;
@property (nonatomic) bool optimizesAuxiliaryContentConfigurations;
@property (nonatomic, readonly) AVAssetDownloadContentConfiguration *primaryContentConfiguration;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)downloadConfigurationWithAsset:(id)arg1 title:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)_asset;
- (id)_assetTitle;
- (struct FigStreamingAssetDownloadConfig { }*)_copyFigDownloadConfig;
- (id)_destinationURL;
- (void)_setDestinationURL:(id)arg1;
- (id)artworkData;
- (id)auxiliaryContentConfigurations;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAsset:(id)arg1 title:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)optimizesAuxiliaryContentConfigurations;
- (id)primaryContentConfiguration;
- (void)setArtworkData:(id)arg1;
- (void)setAuxiliaryContentConfigurations:(id)arg1;
- (void)setOptimizesAuxiliaryContentConfigurations:(bool)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
