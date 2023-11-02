
@interface CAMSharedLibraryButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {
    UIImageView * __glyphView;
    long long  _sharedLibraryMode;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sharedLibraryMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_glyphView;
- (long long)_indexForSharedLibraryMode:(long long)arg1;
- (void)_updateImageForCurrentState;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)setSharedLibraryMode:(long long)arg1;
- (long long)sharedLibraryMode;

@end
