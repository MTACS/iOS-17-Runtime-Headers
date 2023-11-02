
@protocol HMDPhotoLibraryObserverDelegate <NSObject>

@required

- (void)observerDidObserveMajorChange:(HMDPhotoLibraryObserver *)arg1;
- (void)observerDidObserveMinorChange:(HMDPhotoLibraryObserver *)arg1;

@end
