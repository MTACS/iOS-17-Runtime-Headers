
@protocol PXPhotosGridOptionsController <NSObject>

@required

- (NSString *)actionPerformerType;
- (<PXPhotosGridOptionsControllerDelegate> *)optionsDelegate;
- (void)setOptionsDelegate:(id <PXPhotosGridOptionsControllerDelegate>)arg1;
- (NSString *)systemIconImageName;

@optional

- (void)preloadOptions;

@end
