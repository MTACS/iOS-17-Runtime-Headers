
@protocol VUINowPlayingTabControllerDelegate <NSObject>

@optional

- (void)nowPlayingTabControllerMediaInfoDidChangeTo:(VUIMediaInfo *)arg1 canPlay:(bool)arg2 wasAutoPlayed:(bool)arg3;
- (void)nowPlayingTabControllerUserDidInteract:(NSString *)arg1;
- (void)nowPlayingTabControllerUserDidSelectElement;

@end
