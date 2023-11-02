
@interface PHVideoResult : PHCompositeMediaResult {
    NSString * _fingerPrint;
    PFSlowMotionTimeRangeMapper * _timeRangeMapper;
    NSString * _uniformTypeIdentifier;
    NSData * _videoMediaItemMakerData;
    NSURL * _videoURL;
}

@property (nonatomic, retain) NSString *fingerPrint;
@property (nonatomic, retain) PFSlowMotionTimeRangeMapper *timeRangeMapper;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;
@property (nonatomic, retain) NSData *videoMediaItemMakerData;
@property (nonatomic, retain) NSURL *videoURL;

- (void).cxx_destruct;
- (id)allowedInfoKeys;
- (bool)containsValidData;
- (id)fingerPrint;
- (void)setFingerPrint:(id)arg1;
- (void)setTimeRangeMapper:(id)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (void)setVideoAdjustmentData:(id)arg1;
- (void)setVideoMediaItemMakerData:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)timeRangeMapper;
- (id)uniformTypeIdentifier;
- (id)videoAdjustmentData;
- (id)videoMediaItemMakerData;
- (id)videoURL;

@end
