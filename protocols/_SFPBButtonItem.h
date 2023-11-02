
@protocol _SFPBButtonItem <NSObject>

@required

- (_SFPBAppAutoShortcutsButtonItem *)appActionsButtonItem;
- (_SFPBCommandButtonItem *)commandButtonItem;
- (_SFPBContactButtonItem *)contactButtonItem;
- (_SFPBCoreSpotlightButtonItem *)coreSpotlightButtonItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAppActionsButtonItem:(_SFPBAppAutoShortcutsButtonItem *)arg1;
- (void)setCommandButtonItem:(_SFPBCommandButtonItem *)arg1;
- (void)setContactButtonItem:(_SFPBContactButtonItem *)arg1;
- (void)setCoreSpotlightButtonItem:(_SFPBCoreSpotlightButtonItem *)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (void)setWatchListButtonItem:(_SFPBWatchListButtonItem *)arg1;
- (unsigned long long)uniqueId;
- (_SFPBWatchListButtonItem *)watchListButtonItem;
- (unsigned long long)whichValue;

@end
