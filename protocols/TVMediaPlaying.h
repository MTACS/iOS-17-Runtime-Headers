
@protocol TVMediaPlaying <TVObservable>

@required

- (UIImage *)coverImage;
- (bool)isPlaying;

@end
