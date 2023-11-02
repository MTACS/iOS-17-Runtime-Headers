
@protocol MusicKit_SoftLinking_MPIdentifierSet <NSObject>

@required

- (bool)intersectsSet:(id <MusicKit_SoftLinking_MPIdentifierSet>)arg1;
- (MusicKit_SoftLinking_CatalogID *)musicKit_catalogID;
- (NSString *)musicKit_cloudID;
- (MusicKit_SoftLinking_DeviceLocalID *)musicKit_deviceLocalID;
- (bool)musicKit_hasValidIdentifier;
- (NSArray *)musicKit_identifierSetSources;
- (NSString *)musicKit_libraryID;
- (NSString *)musicKit_playbackID;
- (NSString *)musicKit_purchasedAdamID;

@end
