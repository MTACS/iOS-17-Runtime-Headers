
@interface AVInfoPanelPlaybackMetadata : NSObject <NSCopying> {
    bool  _closedCaptioned;
    NSDate * _creationDate;
    double  _duration;
    bool  _livePlayback;
    NSArray * _metadataItems;
    NSDateFormatter * _yearDateFormatter;
}

@property (getter=isClosedCaptioned, nonatomic, readonly) bool closedCaptioned;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) AVMetadataItem *episodeNumberItem;
@property (nonatomic, readonly) NSString *episodeNumberString;
@property (getter=isLivePlayback, nonatomic, readonly) bool livePlayback;
@property (nonatomic, readonly, copy) NSArray *metadataItems;
@property (nonatomic, readonly) NSString *releaseDateString;
@property (nonatomic, readonly) NSString *seasonEpisodeString;
@property (nonatomic, readonly) AVMetadataItem *seasonNumberItem;
@property (nonatomic, readonly) NSString *seasonNumberString;
@property (nonatomic, readonly) AVMetadataItem *secondaryTitleItem;
@property (nonatomic, readonly) NSString *secondaryTitleString;
@property (nonatomic, readonly) AVMetadataItem *titleItem;
@property (nonatomic, readonly) NSString *titleString;
@property (getter=_yearDateFormatter, nonatomic, readonly) NSDateFormatter *yearDateFormatter;

+ (bool)_closedCaptioningStatusForPlayerController:(id)arg1;
+ (double)_durationForPlayerController:(id)arg1;
+ (void)_loadAssetValues:(id)arg1 into:(id)arg2 completion:(id /* block */)arg3;
+ (id)_metadataItemsForPlayerItem:(id)arg1 withAsset:(id)arg2;
+ (id)playbackMetadataForPlayerController:(id)arg1 fulfillment:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_releaseDateStringItem;
- (id)_yearDateFormatter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (id)episodeNumberItem;
- (id)episodeNumberString;
- (unsigned long long)hash;
- (id)initWithPlaybackMetadata:(id)arg1;
- (id)initWithPlayerController:(id)arg1;
- (bool)isClosedCaptioned;
- (bool)isEqual:(id)arg1;
- (bool)isLivePlayback;
- (id)metadataItemForIdentifiers:(id)arg1;
- (id)metadataItems;
- (id)releaseDateString;
- (id)seasonEpisodeString;
- (id)seasonNumberItem;
- (id)seasonNumberString;
- (id)secondaryTitleItem;
- (id)secondaryTitleString;
- (id)titleItem;
- (id)titleString;

@end
