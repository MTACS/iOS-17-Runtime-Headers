
@interface CNPropertyPlaceholderCell : CNLabeledCell {
    UILabel * _label;
}

@property (nonatomic, retain) UILabel *label;

+ (bool)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (id)label;
- (id)labelView;
- (double)minCellHeight;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabel:(id)arg1;
- (bool)shouldPerformDefaultAction;

@end
