
@protocol _UICollectionViewListDetailAccessoryView

@required

- (UIImage *)_renderedImage;
- (UIColor *)accessoryBackgroundColor;
- (UIColor *)accessoryTintColor;
- (id /* block */)actionHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (<UITableConstants> *)constants;
- (void)setAccessoryBackgroundColor:(UIColor *)arg1;
- (void)setAccessoryTintColor:(UIColor *)arg1;
- (void)setActionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setConstants:(id <UITableConstants>)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
