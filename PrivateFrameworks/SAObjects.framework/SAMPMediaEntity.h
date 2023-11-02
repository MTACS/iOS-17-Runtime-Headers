
@interface SAMPMediaEntity : SADomainObject

@property (nonatomic, copy) NSString *adamIdentifier;
@property (nonatomic, copy) NSString *brandIdentifier;
@property (nonatomic, retain) SACalendar *dateAdded;
@property (nonatomic) bool explicit;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic) bool isExplicit;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, retain) SAMPPlaybackInfo *playbackInfo;
@property (nonatomic, copy) NSString *rawPlaybackInfo;
@property (nonatomic, copy) NSString *releaseDate;
@property (nonatomic, copy) NSString *sortTitle;
@property (nonatomic, copy) NSString *storeId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool unplayable;

+ (id)mediaEntity;
+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)adamIdentifier;
- (id)brandIdentifier;
- (id)dateAdded;
- (id)encodedClassName;
- (bool)explicit;
- (id)externalIdentifier;
- (id)groupIdentifier;
- (bool)isExplicit;
- (id)mediaType;
- (id)playbackInfo;
- (id)rawPlaybackInfo;
- (id)releaseDate;
- (void)setAdamIdentifier:(id)arg1;
- (void)setBrandIdentifier:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setExplicit:(bool)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setMediaType:(id)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (void)setRawPlaybackInfo:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setStoreId:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnplayable:(bool)arg1;
- (id)sortTitle;
- (id)storeId;
- (id)title;
- (bool)unplayable;

@end