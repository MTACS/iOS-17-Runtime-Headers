
@protocol PUPhotoEditToolbarDelegate <NSObject>

@required

- (void)dismissAccessibilityHUDForPhotoEditToolbar:(PUPhotoEditToolbar *)arg1;
- (UIAccessibilityHUDItem *)photoEditToolbar:(PUPhotoEditToolbar *)arg1 accessibilityHUDItemForButton:(UIButton *)arg2;
- (void)photoEditToolbar:(PUPhotoEditToolbar *)arg1 showAccessibilityHUDForItem:(UIAccessibilityHUDItem *)arg2;

@end
