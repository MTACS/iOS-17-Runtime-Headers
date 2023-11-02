
@interface AVHUDStringGenerator : NSObject {
    NSString * _assetTrackInfo;
    NSString * _assetType;
    NSNumber * _audioSpatializationMode;
    NSNumber * _averageAudioBitrate;
    NSNumber * _averageIndicatedBitrate;
    NSNumber * _averageVideoBitrate;
    NSNumber * _bufferedVideoPlayed;
    NSNumber * _bufferedVideoRemaining;
    bool  _captureCompleteURI;
    NSString * _configurationGroup;
    NSNumber * _currentFrameRate;
    NSString * _customPerfInfo;
    NSNumber * _decoderFrameDrops;
    NSNumber * _displayResolutionHeight;
    NSNumber * _displayResolutionWidth;
    NSString * _formattedDisplayString;
    NSNumber * _imageQueueFrameDrops;
    NSNumber * _networkBandiwdth;
    NSNumber * _nominalFrameRate;
    NSNumber * _peakIndicatedBitrate;
    AVPlayer * _player;
    NSString * _playerItemURL;
    NSNumber * _presentationSizeHeight;
    NSNumber * _presentationSizeWidth;
    long long  _prevStallCount;
    long long  _prevVariantIdx;
    NSNumber * _refreshRate;
    NSString * _sessionID;
    bool  _spatialDiagnostics;
    NSNumber * _totalFrameDrops;
    long long  _totalStallCount;
    NSNumber * _totalStalls;
    NSString * _trackFormatDescriptions;
    NSNumber * _variantIndex;
    NSNumber * _videoApproximateDisplaySizeHeight;
    NSNumber * _videoApproximateDisplaySizeWidth;
    NSString * _videoRange;
}

@property (nonatomic, readonly) NSNumber *audioSpatializationMode;
@property (nonatomic) bool captureCompleteURI;
@property (nonatomic, readonly) NSNumber *displayResolutionHeight;
@property (nonatomic, readonly) NSNumber *displayResolutionWidth;
@property (nonatomic, readonly) NSString *formattedDisplayString;
@property AVPlayer *player;
@property (nonatomic) long long prevStallCount;
@property (nonatomic) long long prevVariantIdx;
@property (nonatomic) bool spatialDiagnostics;
@property (nonatomic) long long totalStallCount;

+ (id)descriptionStringForBitRate:(double)arg1;
+ (id)descriptionStringForFormatOfTrack:(id)arg1;
+ (id)descriptionStringForTracksOfPlayerItem:(id)arg1;
+ (id)descriptionStringForVideoRangeOfFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;

- (void).cxx_destruct;
- (id)audioSpatializationMode;
- (bool)captureCompleteURI;
- (void)dealloc;
- (id)displayResolutionHeight;
- (id)displayResolutionWidth;
- (id)formattedDisplayString;
- (id)player;
- (long long)prevStallCount;
- (long long)prevVariantIdx;
- (void)setCaptureCompleteURI:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPrevStallCount:(long long)arg1;
- (void)setPrevVariantIdx:(long long)arg1;
- (void)setSpatialDiagnostics:(bool)arg1;
- (void)setTotalStallCount:(long long)arg1;
- (bool)spatialDiagnostics;
- (long long)totalStallCount;
- (void)update;
- (void)updateFromPlayer;
- (void)updateFromPlayerItem;

@end
