
@interface HKSimpleDataEntryCell : UITableViewCell {
    bool  _editDisabled;
}

@property (nonatomic) bool editDisabled;

- (void)beginEditing;
- (bool)editDisabled;
- (void)setEditDisabled:(bool)arg1;

@end
