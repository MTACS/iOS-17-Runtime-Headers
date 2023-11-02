
@interface STBarView : UIView {
    UIColor * _color;
    UIView * _darkenedView;
    STUsageReportGraphDataPoint * _dataPoint;
    NSArray * _sectionHeightConstraints;
    NSArray * _sectionViews;
    bool  _useVibrancy;
}

@property (nonatomic, copy) UIColor *color;
@property (getter=isDarkened) bool darkened;
@property (readonly) UIView *darkenedView;
@property (nonatomic, retain) STUsageReportGraphDataPoint *dataPoint;
@property (nonatomic, copy) NSArray *sectionHeightConstraints;
@property (nonatomic, copy) NSArray *sectionViews;
@property (readonly) bool useVibrancy;

- (void).cxx_destruct;
- (id)color;
- (id)darkenedView;
- (id)dataPoint;
- (id)initWithDataPoint:(id)arg1 useVibrancy:(bool)arg2;
- (bool)isDarkened;
- (id)sectionHeightConstraints;
- (id)sectionViews;
- (void)setColor:(id)arg1;
- (void)setDarkened:(bool)arg1;
- (void)setDataPoint:(id)arg1;
- (void)setSectionHeightConstraints:(id)arg1;
- (void)setSectionViews:(id)arg1;
- (void)setUpSectionHeightConstraints;
- (void)setUpSections;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useVibrancy;

@end
