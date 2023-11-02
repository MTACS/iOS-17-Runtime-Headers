
@interface JFXAVMediaMetaDataReader : JFXAVMediaDataReader <JFXMediaMetadataReader> {
    AVAssetReaderOutputMetadataAdaptor * _assetReaderOutputMetadataAdaptor;
    AVMetadataItem * _currentMetadataItem;
    AVMetadataItem * _nextMetadataItem;
}

@property (nonatomic, retain) AVAssetReaderOutputMetadataAdaptor *assetReaderOutputMetadataAdaptor;
@property (nonatomic, retain) AVMetadataItem *currentMetadataItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) AVMetadataItem *nextMetadataItem;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } readableTimeRange;
@property (nonatomic, readonly) unsigned long long signPostID;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)JFX_preloadData;
- (id)assetReaderOutputMetadataAdaptor;
- (void)cancelReadingForReaderReset;
- (id)createAssetReaderTrackOutput;
- (id)currentMetadataItem;
- (void)didUpdateReadingRange;
- (bool)hasRemainingAvailableData;
- (id)metadataForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)nextMetadataItem;
- (bool)readAheadToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)readAndDiscardRemainingAvailableData;
- (void)setAssetReaderOutputMetadataAdaptor:(id)arg1;
- (void)setCurrentMetadataItem:(id)arg1;
- (void)setNextMetadataItem:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTimeOfCurrentData;

@end
