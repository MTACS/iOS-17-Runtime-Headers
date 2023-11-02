
@interface DSIconTableViewCell : UITableViewCell

+ (id)iconTableViewCellFromTableView:(id)arg1 withRightAlignedLabel:(id)arg2 detail:(id)arg3 icon:(id)arg4;
+ (id)iconTableViewCellFromTableView:(id)arg1 withText:(id)arg2 detail:(id)arg3 icon:(id)arg4;

- (void)customizeProperties;
- (id)initWithRightAlignedLabel:(id)arg1 detail:(id)arg2 icon:(id)arg3;
- (id)initWithText:(id)arg1 detail:(id)arg2 icon:(id)arg3;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
