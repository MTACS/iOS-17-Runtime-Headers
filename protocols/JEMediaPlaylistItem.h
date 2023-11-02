
@protocol JEMediaPlaylistItem <NSObject>

@optional

- (NSArray *)eventData;
- (unsigned long long)startOverallPosition;
- (unsigned long long)startPosition;

@end
