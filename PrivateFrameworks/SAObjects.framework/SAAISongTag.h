
@interface SAAISongTag : SADomainObject

@property (nonatomic, copy) NSString *adamId;
@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *albumAdamId;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *artistAdamId;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSURL *iTunesUri;
@property (nonatomic, retain) SAUIImageResource *previewImage;
@property (nonatomic, copy) NSURL *radioStationUri;
@property (nonatomic, copy) NSString *title;

+ (id)songTag;
+ (id)songTagWithDictionary:(id)arg1 context:(id)arg2;

- (id)adamId;
- (id)album;
- (id)albumAdamId;
- (id)artist;
- (id)artistAdamId;
- (id)contentRating;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)iTunesUri;
- (id)previewImage;
- (id)radioStationUri;
- (void)setAdamId:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setAlbumAdamId:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtistAdamId:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setITunesUri:(id)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setRadioStationUri:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
