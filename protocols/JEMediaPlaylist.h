
@protocol JEMediaPlaylist <NSObject>

@required

- (<JEMediaPlaylistItem> *)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
- (NSArray *)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;

@optional

- (NSArray *)eventData;

@end
