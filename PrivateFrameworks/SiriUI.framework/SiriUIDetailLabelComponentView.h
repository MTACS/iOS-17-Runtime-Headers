
@interface SiriUIDetailLabelComponentView : SiriUILabelComponentView {
    UILabel * _detailLabel;
    UILabel * _mainLabel;
}

@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) UILabel *mainLabel;

+ (id)viewForComponent:(id)arg1;

- (void).cxx_destruct;
- (void)addSubviewsForComponentModel:(id)arg1;
- (id)detailLabel;
- (id)mainLabel;
- (void)setDetailLabel:(id)arg1;
- (void)setMainLabel:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
