
@protocol _UICollectionViewListAccessoryDisclosureView

@required

- (UIColor *)accessoryTintColor;
- (id /* block */)actionHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (<UITableConstants> *)constants;
- (UIControl *)control;
- (UIImage *)image;
- (bool)rotated;
- (double)rotationAngle;
- (void)setAccessoryTintColor:(UIColor *)arg1;
- (void)setActionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setConstants:(id <UITableConstants>)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setRotated:(bool)arg1;
- (void)setRotationAngle:(double)arg1;

@end
