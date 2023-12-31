
@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell {
    CNPostalAddressEditorView * _addressEditor;
}

@property (nonatomic, retain) CNPostalAddressEditorView *addressEditor;
@property (nonatomic, copy) UIColor *editorSeparatorColor;

- (void).cxx_destruct;
- (id)addressEditor;
- (id)editorSeparatorColor;
- (id)firstResponderItem;
- (void)layoutChanged:(id)arg1;
- (void)layoutMarginsDidChange;
- (double)leftValueMargin;
- (void)setAddressEditor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setEditorSeparatorColor:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)valueChanged:(id)arg1;
- (id)valueView;
- (id)variableConstraints;

@end
