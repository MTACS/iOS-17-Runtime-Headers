
@interface MKPlaceCompleteHoursView : UIView <MKPlaceHoursViewDelegate> {
    UIImageView * _categoryIconView;
    UIView * _containerViewForHoursAndCategoryName;
    NSLayoutConstraint * _hoursTopLabelBaselineToCategoryName;
    GEOLinkedService * _linkedService;
    _MKUILabel * _localizedCategoryNameLabel;
    NSArray * _placeHoursViews;
    NSArray * _sortedBusinessHours;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *placeHoursViews;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setUpConstraints;
- (void)commonInit;
- (void)hoursViewDidUpdate:(id)arg1;
- (id)initWithLinkedService:(id)arg1 showTodaysHoursOnly:(bool)arg2;
- (id)placeHoursViews;
- (void)setPlaceHoursViews:(id)arg1;

@end
