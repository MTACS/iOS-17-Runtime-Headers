
@protocol PUPhotoEditLayoutDynamicAdaptable <PUPhotoEditLayoutSource>

@required

- (long long)layoutOrientation;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;

@end
