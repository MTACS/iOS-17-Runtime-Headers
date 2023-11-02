
@interface CLFPhotosSettings : CLFBaseSettings

@property (nonatomic) bool includeSharedAlbums;
@property (nonatomic, retain) NSArray *selectedSharedAlbums;

+ (id)allPreferenceSelectorsAsStrings;
+ (id)domainName;
+ (id)sharedInstance;

- (bool)includeSharedAlbums;
- (id)init;
- (id)selectedSharedAlbums;
- (void)setIncludeSharedAlbums:(bool)arg1;
- (void)setSelectedSharedAlbums:(id)arg1;

@end
