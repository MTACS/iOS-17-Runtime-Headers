
@protocol WFTriggerOptionSelectionViewContainerDelegate <NSObject>

@required

- (void)view:(WFTriggerOptionSelectionViewContainer *)arg1 didSelectOptionWithLeftViewCurrentlySelected:(bool)arg2;
- (void)view:(WFTriggerOptionSelectionViewContainer *)arg1 didSelectOptionWithRightViewCurrentlySelected:(bool)arg2;

@end
