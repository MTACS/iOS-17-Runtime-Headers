
@interface CSBackgroundContentView : UIView <CSWallpaperView> {
    UIView<UIScenePresentation> * _presentationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView<UIScenePresentation> *presentationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPresentationView:(id)arg1;
- (void)layoutSubviews;
- (id)presentationView;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCoverSheetWallpaperStyle:(long long)arg1;
- (void)setFullscreen:(bool)arg1;

@end
