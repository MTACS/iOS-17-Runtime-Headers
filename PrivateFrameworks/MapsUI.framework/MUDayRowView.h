
@interface MUDayRowView : UIView <MUStackable> {
    UIView<MULabelViewProtocol> * _dayLabel;
    UIView<MULabelViewProtocol> * _headerLabel;
    NSArray * _hoursConstraints;
    UIView<MULabelViewProtocol> * _hoursLabel;
    bool  _stacked;
    MUDayRowViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStacked, nonatomic) bool stacked;
@property (readonly) Class superclass;
@property (nonatomic, retain) MUDayRowViewModel *viewModel;

+ (id)_hoursMonospacedFont;

- (void).cxx_destruct;
- (id)_createHoursConstraints;
- (void)_refreshHoursLabel;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateFonts;
- (id)initWithViewModel:(id)arg1;
- (bool)isStacked;
- (void)setStacked:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldStackForProposedWidth:(double)arg1;
- (id)viewModel;

@end
