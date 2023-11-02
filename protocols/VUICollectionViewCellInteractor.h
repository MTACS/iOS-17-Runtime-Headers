
@protocol VUICollectionViewCellInteractor

@optional

- (void)vui_cellNeedsReloading:(VUIBaseCollectionViewCell *)arg1;
- (bool)vui_handleActionInCell:(VUIBaseCollectionViewCell *)arg1 fromSubview:(UIView *)arg2 details:(NSDictionary *)arg3;

@end
