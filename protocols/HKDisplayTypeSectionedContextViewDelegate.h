
@protocol HKDisplayTypeSectionedContextViewDelegate <NSObject>

@required

- (void)contextView:(HKDisplayTypeSectionedContextView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)contextView:(HKDisplayTypeSectionedContextView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;

@optional

- (bool)contextView:(HKDisplayTypeSectionedContextView *)arg1 canSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)contextView:(HKDisplayTypeSectionedContextView *)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;

@end
