
@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>

@property (getter=isAssociatedWithFragmentMinder, nonatomic, readonly) bool associatedWithFragmentMinder;
@property (nonatomic, readonly) NSArray *tracks;

+ (bool)expectsPropertyRevisedNotifications;

- (Class)_classForMovieTracks;
- (bool)_mindsFragments;
- (bool)_needsLegacyChangeNotifications;
- (void)_setIsAssociatedWithFragmentMinder:(bool)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isAssociatedWithFragmentMinder;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end
