
@interface CNCardNamePickingCell : CNLabeledCell {
    UILabel * _nameLabel;
    UILabel * _sourceLabel;
}

@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) UILabel *sourceLabel;

- (void).cxx_destruct;
- (bool)isSuggested;
- (id)labelView;
- (id)nameLabel;
- (void)setCardGroupItem:(id)arg1;
- (id)sourceLabel;
- (id)valueView;

@end
