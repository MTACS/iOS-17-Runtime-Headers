
@protocol MKPlaceSectionViewDelegate <NSObject>

@required

- (void)sectionView:(MKPlaceSectionView *)arg1 didDeselectRow:(MKPlaceSectionItemView *)arg2 atIndex:(unsigned long long)arg3;
- (void)sectionView:(MKPlaceSectionView *)arg1 didSelectFooter:(MKPlaceSectionItemView *)arg2;
- (void)sectionView:(MKPlaceSectionView *)arg1 didSelectHeader:(MKPlaceSectionItemView *)arg2;
- (void)sectionView:(MKPlaceSectionView *)arg1 didSelectRow:(MKPlaceSectionItemView *)arg2 atIndex:(unsigned long long)arg3;

@end
