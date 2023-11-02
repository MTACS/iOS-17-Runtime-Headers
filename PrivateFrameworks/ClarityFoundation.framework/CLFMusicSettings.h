
@interface CLFMusicSettings : CLFBaseSettings

@property (nonatomic, retain) NSArray *selectedPlaylists;

+ (id)allPreferenceSelectorsAsStrings;
+ (id)domainName;
+ (id)sharedInstance;

- (id)init;
- (id)selectedPlaylists;
- (void)setSelectedPlaylists:(id)arg1;

@end
