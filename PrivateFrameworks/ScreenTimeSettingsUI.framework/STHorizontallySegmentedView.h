
@interface STHorizontallySegmentedView : UIView {
    unsigned long long  _maximumNumberOfLines;
    NSNumber * _numberOfLines;
    double  _previousWidth;
    NSArray * _segmentConstraints;
    NSArray * _segmentItems;
    NSMutableArray * _segmentViews;
    bool  _truncateLabels;
    bool  _useVibrancy;
}

@property (readonly) unsigned long long maximumNumberOfLines;
@property (nonatomic, retain) NSNumber *numberOfLines;
@property (nonatomic) double previousWidth;
@property (nonatomic, copy) NSArray *segmentConstraints;
@property (nonatomic, copy) NSArray *segmentItems;
@property (nonatomic, readonly) NSMutableArray *segmentViews;
@property (readonly) bool truncateLabels;
@property (readonly) bool useVibrancy;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_stHorizontallySegmentedViewCommonInit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVibrancy:(bool)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(bool)arg3;
- (void)layoutSubviews;
- (unsigned long long)maximumNumberOfLines;
- (id)numberOfLines;
- (double)previousWidth;
- (id)segmentConstraints;
- (id)segmentItems;
- (id)segmentViews;
- (void)setNumberOfLines:(id)arg1;
- (void)setPreviousWidth:(double)arg1;
- (void)setSegmentConstraints:(id)arg1;
- (void)setSegmentItems:(id)arg1;
- (bool)truncateLabels;
- (bool)useVibrancy;

@end
