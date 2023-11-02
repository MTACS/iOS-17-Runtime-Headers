
@interface HKEmergencyCardShareInfoTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate, UITextViewDelegate> {
    HKMedicalIDEditorSwitchCell * _cell;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)_editCell;
- (id)_viewCellForTableView:(id)arg1;
- (id)footerTextViewString;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setTableView:(id)arg1;
- (void)switchWasChanged:(bool)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleForFooter;

@end
