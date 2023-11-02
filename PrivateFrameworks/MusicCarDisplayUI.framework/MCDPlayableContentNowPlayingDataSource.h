
@interface MCDPlayableContentNowPlayingDataSource : NSObject <MCDNowPlayingDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_itemProperties;
- (id)playingItemProperties;
- (id)queueItemProperties;
- (id)requestLabel;

@end
