
@interface UIStatusBarLocationItemView : UIStatusBarItemView {
    int  _iconType;
}

- (id)_imageName;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
