
@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating> {
    NSObject<VUIMediaEntityAssetController> * _assetController;
    VUIVideoManagedObject * _videoManagedObject;
}

@property (nonatomic, retain) NSObject<VUIMediaEntityAssetController> *assetController;
@property (nonatomic, retain) VUIVideoManagedObject *videoManagedObject;

- (void).cxx_destruct;
- (id)HLSColorCapability;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1;
- (id)addedDate;
- (bool)allowsManualDownloadRenewal;
- (id)assetController;
- (id)assetType;
- (id)availabilityEndDate;
- (id)brandID;
- (id)brandName;
- (id)canonicalID;
- (id)colorCapability;
- (void)dealloc;
- (id)downloadExpirationDate;
- (id)duration;
- (id)episodeIndexInSeries;
- (id)episodeNumber;
- (id)fractionalEpisodeNumber;
- (id)genreTitle;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3;
- (bool)isFamilySharingContent;
- (id)isLocal;
- (id)isPlayable;
- (bool)markedAsDeleted;
- (id)releaseDate;
- (bool)renewsOfflineKeysAutomatically;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)seasonNumber;
- (id)seasonTitle;
- (void)setAssetController:(id)arg1;
- (void)setVideoManagedObject:(id)arg1;
- (id)showCanonicalID;
- (id)showIdentifier;
- (id)showTitle;
- (id)storeID;
- (id)title;
- (id)videoManagedObject;

@end
