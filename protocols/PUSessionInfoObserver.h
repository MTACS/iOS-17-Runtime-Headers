
@protocol PUSessionInfoObserver <NSObject>

@optional

- (void)sessionInfoPhotoSelectionDidChange:(PUSessionInfo *)arg1;
- (void)sessionInfoStatusDidChange:(PUSessionInfo *)arg1;

@end
