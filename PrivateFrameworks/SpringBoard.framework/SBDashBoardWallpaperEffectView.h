
@interface SBDashBoardWallpaperEffectView : SBWallpaperEffectView <CSWallpaperView> {
    SBUIBackgroundView * _backgroundView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didAddSubview:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCoverSheetWallpaperStyle:(long long)arg1;

@end
