
@interface HKEmergencyCardFooterTableItem : HKEmergencyCardTableItem {
    NSAttributedString * _attributedTitleForFooter;
    HKEmergencyCardFooterCell * _cell;
    id /* block */  _shouldInteractWithURLBlock;
}

@property (nonatomic, retain) NSAttributedString *attributedTitleForFooter;
@property (nonatomic, copy) id /* block */ shouldInteractWithURLBlock;

- (void).cxx_destruct;
- (id)_cell;
- (id)attributedTitleForFooter;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setAttributedTitleForFooter:(id)arg1;
- (void)setShouldInteractWithURLBlock:(id /* block */)arg1;
- (id /* block */)shouldInteractWithURLBlock;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
