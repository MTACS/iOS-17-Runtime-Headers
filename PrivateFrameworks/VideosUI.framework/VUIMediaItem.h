
@interface VUIMediaItem : VUIMediaEntity {
    NSNumber * _isPlayable;
    NSString * _seasonCanonicalID;
    NSString * _showCanonicalID;
}

@property (nonatomic, readonly) bool allowsManualDownloadRenewal;
@property (nonatomic, readonly, copy) NSNumber *assetType;
@property (nonatomic, readonly, copy) NSDate *availabilityEndDate;
@property (nonatomic, copy) NSNumber *bookmark;
@property (nonatomic, readonly, copy) VUIMediaItemCredits *credits;
@property (nonatomic, readonly, copy) NSDate *downloadExpirationDate;
@property (nonatomic, readonly, copy) NSNumber *duration;
@property (nonatomic, readonly, copy) NSNumber *episodeIndexInSeries;
@property (nonatomic, readonly, copy) NSNumber *episodeNumber;
@property (nonatomic, readonly, copy) NSURL *extrasURL;
@property (nonatomic, readonly, copy) NSNumber *fractionalEpisodeNumber;
@property (nonatomic, copy) NSNumber *hasBeenPlayed;
@property (nonatomic, readonly) bool isFamilySharingContent;
@property (nonatomic, readonly, copy) NSNumber *isPlayable;
@property (nonatomic, readonly) MPMediaItem *mediaPlayerMediaItem;
@property (nonatomic, copy) NSNumber *playCount;
@property (nonatomic, readonly, copy) NSString *previewFrameImageIdentifier;
@property (nonatomic, readonly) bool renewsOfflineKeysAutomatically;
@property (nonatomic, readonly, copy) NSDate *rentalExpirationDate;
@property (nonatomic, readonly, copy) NSNumber *rentalPlaybackDuration;
@property (nonatomic, readonly, copy) NSString *seasonCanonicalID;
@property (nonatomic, readonly, copy) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (nonatomic, readonly, copy) NSString *seasonTitle;
@property (nonatomic, readonly, copy) NSString *showCanonicalID;
@property (nonatomic, readonly, copy) NSString *studio;

+ (id)_mediaItemWithMPMediaItem:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingPlayedState;

- (void).cxx_destruct;
- (bool)allowsManualDownloadRenewal;
- (id)assetType;
- (id)availabilityEndDate;
- (id)bookmark;
- (id)creationDate;
- (id)credits;
- (id)description;
- (id)downloadExpirationDate;
- (id)duration;
- (id)episodeIndexInSeries;
- (id)episodeNumber;
- (id)extrasURL;
- (id)fractionalEpisodeNumber;
- (id)hasBeenPlayed;
- (bool)isFamilySharingContent;
- (id)isPlayable;
- (id)lastPlayedDate;
- (id)mediaPlayerMediaItem;
- (id)modifiedDate;
- (id)playCount;
- (id)previewFrameImageIdentifier;
- (bool)renewsOfflineKeysAutomatically;
- (id)rentalExpirationDate;
- (id)rentalPlaybackDuration;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)seasonTitle;
- (void)setBookmark:(id)arg1;
- (void)setHasBeenPlayed:(id)arg1;
- (void)setPlayCount:(id)arg1;
- (id)showCanonicalID;
- (id)studio;

@end
