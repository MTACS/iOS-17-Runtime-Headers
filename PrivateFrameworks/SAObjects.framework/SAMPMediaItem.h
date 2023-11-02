
@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, retain) SACalendar *datePurchased;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSNumber *perceivableStartTimeInSeconds;
@property (nonatomic, retain) SAMPReleaseInfo *releaseInfo;
@property (nonatomic, copy) NSString *sortAlbum;
@property (nonatomic, copy) NSString *sortArtist;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)mediaItem;
+ (id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)album;
- (id)artist;
- (id)datePurchased;
- (id)encodedClassName;
- (id)genre;
- (id)groupIdentifier;
- (id)perceivableStartTimeInSeconds;
- (id)releaseInfo;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDatePurchased:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setPerceivableStartTimeInSeconds:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setSortAlbum:(id)arg1;
- (void)setSortArtist:(id)arg1;
- (id)sortAlbum;
- (id)sortArtist;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)_af_mediaItemWithMRContentItem:(id)arg1;
+ (id)_af_mediaItemWithMRContentItemRef:(void*)arg1;

@end
