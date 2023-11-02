
@protocol PXMusicCurationResult

@required

- (NSError *)error;
- (bool)isComplete;
- (NSDictionary *)songsByCategory;

@end
