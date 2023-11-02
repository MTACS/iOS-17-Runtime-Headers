
@protocol MCDNowPlayingDataSource <NSObject>

@required

- (MPPropertySet *)playingItemProperties;
- (MPPropertySet *)queueItemProperties;
- (NSString *)requestLabel;

@optional

- (MPPropertySet *)queueSectionProperties;

@end
