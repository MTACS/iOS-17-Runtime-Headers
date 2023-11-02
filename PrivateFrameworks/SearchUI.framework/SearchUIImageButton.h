
@interface SearchUIImageButton : UIButton {
    SearchUIImage * _selectedImage;
    SearchUIImage * _unselectedImage;
}

@property (nonatomic, retain) SearchUIImage *selectedImage;
@property (nonatomic, retain) SearchUIImage *unselectedImage;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (void)setUnselectedImage:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unselectedImage;

@end
