
@protocol HUQuickControlCollectionViewDelegateLayout <UICollectionViewDelegate>

@required

- (double)heightForSupplementaryViewAtIndexPath:(NSIndexPath *)arg1;
- (HUIntrinsicSizeDescriptor *)intrinsicSizeDescriptorForItemAtIndexPath:(NSIndexPath *)arg1 itemSize:(unsigned long long)arg2;

@end
