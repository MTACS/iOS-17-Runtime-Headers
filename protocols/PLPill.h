
@protocol PLPill <NSObject>

@required

- (NSArray *)centerContentItems;
- (UIView *)leadingAccessoryView;
- (PLPillContentItem *)referenceContentItemForIntrinsicContentSize;
- (void)setCenterContentItems:(NSArray *)arg1;
- (void)setCenterContentItems:(NSArray *)arg1 animated:(bool)arg2;
- (void)setReferenceContentItemForIntrinsicContentSize:(PLPillContentItem *)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentItem:(PLPillContentItem *)arg1;
- (UIView *)trailingAccessoryView;

@end
