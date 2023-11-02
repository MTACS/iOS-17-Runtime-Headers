
@interface VUIDownloadEntity : NSObject <NSCopying> {
    NSMutableArray * _assetControllers;
    <VUIDownloadEntityDelegate> * _delegate;
    long long  _downloadType;
    NSNumber * _duration;
    NSNumber * _episodeNumber;
    NSNumber * _fractionalEpisodeNumber;
    NSObject<VUIMediaEntityIdentifier> * _identifier;
    NSArray * _mediaEntities;
    NSNumber * _numberOfMediaItems;
    NSNumber * _numberOfMediaItemsDownloading;
    NSNumber * _releaseYear;
    NSObject<VUIMediaEntityIdentifier> * _showIdentifier;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *assetControllers;
@property (nonatomic) <VUIDownloadEntityDelegate> *delegate;
@property (nonatomic) long long downloadType;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSNumber *episodeNumber;
@property (nonatomic, retain) NSNumber *fractionalEpisodeNumber;
@property (nonatomic, retain) NSObject<VUIMediaEntityIdentifier> *identifier;
@property (nonatomic, retain) NSArray *mediaEntities;
@property (nonatomic, retain) NSNumber *numberOfMediaItems;
@property (nonatomic, retain) NSNumber *numberOfMediaItemsDownloading;
@property (nonatomic, retain) NSNumber *releaseYear;
@property (nonatomic, retain) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_assetControllerStateDidChange:(id)arg1;
- (void)_configureWithMediaEntities:(id)arg1;
- (void)_removeDeletedMediaItemInShowPageIfNeeded;
- (id)assetControllers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (long long)downloadType;
- (id)duration;
- (id)episodeNumber;
- (id)fractionalEpisodeNumber;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithMediaEntities:(id)arg1 withDownloadType:(long long)arg2;
- (id)initWithMediaEntity:(id)arg1 withDownloadType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaEntities;
- (id)numberOfMediaItems;
- (id)numberOfMediaItemsDownloading;
- (id)releaseYear;
- (void)setAssetControllers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadType:(long long)arg1;
- (void)setDuration:(id)arg1;
- (void)setEpisodeNumber:(id)arg1;
- (void)setFractionalEpisodeNumber:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMediaEntities:(id)arg1;
- (void)setNumberOfMediaItems:(id)arg1;
- (void)setNumberOfMediaItemsDownloading:(id)arg1;
- (void)setReleaseYear:(id)arg1;
- (void)setShowIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)showIdentifier;
- (id)title;

@end
