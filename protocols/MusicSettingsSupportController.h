
@protocol MusicSettingsSupportController <NSObject>

@required

- (NSArray *)allSpecifiers;
- (void)setAllSpecifiers:(NSArray *)arg1;
- (NSString *)stringsTable;
- (void)updateVisibleSpecifiers;
- (NSNumber *)valueForMusicCapability:(NSString *)arg1;

@end
