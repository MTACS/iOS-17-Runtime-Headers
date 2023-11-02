
@interface ICiOSTableAccessibilityElement : UIAccessibilityElement <UIAccessibilityContainerDataTable> {
    ICiOSTableAttachmentView * _parentAttachmentView;
    ICTableAccessibilityController * _tableAXController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ICiOSTableAttachmentView *parentAttachmentView;
@property (readonly) Class superclass;
@property (nonatomic) ICTableAccessibilityController *tableAXController;

- (void).cxx_destruct;
- (unsigned long long)accessibilityColumnCount;
- (long long)accessibilityContainerType;
- (id)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (id)accessibilityHeaderElementsForRow:(unsigned long long)arg1;
- (unsigned long long)accessibilityRowCount;
- (id)initWithTableAccessibilityController:(id)arg1 parentAttachmentView:(id)arg2;
- (bool)isAccessibilityElement;
- (id)parentAttachmentView;
- (void)setParentAttachmentView:(id)arg1;
- (void)setTableAXController:(id)arg1;
- (id)tableAXController;

@end
