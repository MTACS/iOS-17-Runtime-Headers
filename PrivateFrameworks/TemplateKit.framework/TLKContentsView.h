
@interface TLKContentsView : TLKStackView {
    NSMutableArray * _detailsLabels;
    TLKLabel * _titleLabel;
}

@property (nonatomic, retain) NSMutableArray *detailsLabels;
@property (nonatomic, retain) TLKLabel *titleLabel;

+ (id)detailsLabel;

- (void).cxx_destruct;
- (id)detailsLabels;
- (id)init;
- (void)setDetailsLabels:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateWithTitle:(id)arg1 contents:(id)arg2;

@end
