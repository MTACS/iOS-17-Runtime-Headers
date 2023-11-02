
@interface _HKReportTableViewCell : UITableViewCell {
    double  _minimumHeight;
    UIView * _reportAreaView;
    UIImageView * _reportImageView;
    UILabel * _reportLabel;
}

@property (nonatomic, readonly) double minimumHeight;
@property (nonatomic, readonly) UIView *reportAreaView;
@property (nonatomic, readonly) UIImageView *reportImageView;
@property (nonatomic, readonly) UILabel *reportLabel;

- (void).cxx_destruct;
- (id)init;
- (double)minimumHeight;
- (id)reportAreaView;
- (id)reportImageView;
- (id)reportLabel;
- (void)setReportName:(id)arg1 reportImage:(id)arg2;
- (void)setUpUI;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
