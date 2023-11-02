
@interface RUIModernHeaderView : OBHeaderView <RUIHeader> {
    NSString * _detailText;
    double  _iconHeight;
    NSString * _subHeaderText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic) double iconHeight;
@property (nonatomic, retain) NSString *subHeaderText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)bottomPadding;
- (id)detailText;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (double)iconHeight;
- (double)iconToHeaderLabelPadding;
- (id)initWithAttributes:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (void)setDetailText:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setIconHeight:(double)arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubHeaderText:(id)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderText;
- (double)topPadding;
- (void)updateDetailText;

@end
