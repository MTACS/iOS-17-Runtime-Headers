
@protocol WFTriggerMultiSelectCellDelegate <NSObject>

@optional

- (void)cell:(WFTriggerMultiSelectCell *)arg1 didSelectOptionWithLeftViewSelected:(bool)arg2 rightViewSelected:(bool)arg3;
- (void)cell:(WFTriggerMultiSelectCell *)arg1 didSelectOptions:(NSArray *)arg2;

@end
