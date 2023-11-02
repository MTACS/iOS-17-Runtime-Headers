
@interface PUPhotoSceneHUD : UIView {
    PXHUDView * _hudView;
    NSURL * _mdataURL;
}

@property (nonatomic, readonly) PXHUDView *hudView;
@property (nonatomic, readonly) NSURL *mdataURL;

- (void).cxx_destruct;
- (id)hudView;
- (id)initWithPhoto:(id)arg1;
- (id)mdataURL;
- (void)update;

@end
