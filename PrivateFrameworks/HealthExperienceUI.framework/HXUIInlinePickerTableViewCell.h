
@interface HXUIInlinePickerTableViewCell : UITableViewCell <HXUIExpandableTableViewCell> {
    HXUIPickerLabelView * _contentLabel;
    bool  _expanded;
    UIPickerView * _picker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (nonatomic, readonly) double expandedHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPickerView *pickerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentLabelFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pickerFrame;
- (void)beginEditing;
- (struct CGSize { double x1; double x2; })contentLabelHeightForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)endEditing;
- (bool)expanded;
- (double)expandedHeight;
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (id)pickerView;
- (void)setDisplayName:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setValue:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
