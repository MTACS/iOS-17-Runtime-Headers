
@interface CNLabelPickerController : CNPickerController {
    CNPropertyGroupItem * _item;
    NSMutableArray * _labelsToDeleteOnCommit;
}

@property (nonatomic, readonly) CNPropertyGroupItem *item;
@property (retain) NSMutableArray *labelsToDeleteOnCommit;

- (void).cxx_destruct;
- (id)initForPropertyItem:(id)arg1;
- (id)item;
- (id)labelsToDeleteOnCommit;
- (void)pickedItem:(id)arg1;
- (void)removeCustomItem:(id)arg1;
- (void)setLabelsToDeleteOnCommit:(id)arg1;
- (id)titleForPickerItem:(id)arg1;

@end
