
@protocol MTMediaPlaylistItem <NSObject>

@optional

- (NSArray *)eventData;
- (unsigned long long)overallPosition;
- (unsigned long long)startOverallPosition;
- (unsigned long long)startPosition;

@end
