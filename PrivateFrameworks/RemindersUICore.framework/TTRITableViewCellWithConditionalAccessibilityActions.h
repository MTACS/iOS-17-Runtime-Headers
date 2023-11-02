
@interface TTRITableViewCellWithConditionalAccessibilityActions : UITableViewCell

- (id)_privateAccessibilityCustomActions;
- (bool)ttriAccessibilityHidesPrivateActions;
- (bool)ttriAccessibilityIsTableViewEditing;

@end
