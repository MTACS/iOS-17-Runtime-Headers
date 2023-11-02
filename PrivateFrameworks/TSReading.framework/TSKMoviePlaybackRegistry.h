
@interface TSKMoviePlaybackRegistry : NSObject

+ (id)sharedMoviePlaybackRegistry;

- (void)object:(id)arg1 willTransferMoviePlaybackToObject:(id)arg2;
- (void)objectDidEndMoviePlayback:(id)arg1;
- (void)objectWillBeginMoviePlayback:(id)arg1;

@end
