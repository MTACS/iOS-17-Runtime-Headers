
@interface AAUIPaneHeaderView : AAUIOBHeaderView

@property (nonatomic, retain) UILabel *detailLabel;

- (double)innerHeaderMaxY;
- (void)layoutSubviews;
- (void)setDetailText:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleText:(id)arg1;

@end
