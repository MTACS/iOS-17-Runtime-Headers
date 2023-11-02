
@interface HKCategoricalDateAxis : HKDateAxis {
    long long  _categoriesStartHourPosition;
    NSArray * _categoryTitles;
    NSDateComponents * _majorAxisIntervalComponents;
    NSDateComponents * _minorAxisIntervalComponents;
}

@property (nonatomic) long long categoriesStartHourPosition;
@property (nonatomic, copy) NSArray *categoryTitles;
@property (nonatomic, copy) NSDateComponents *majorAxisIntervalComponents;
@property (nonatomic, copy) NSDateComponents *minorAxisIntervalComponents;

+ (double)_categoryLocationIntervalForCategoryCount:(long long)arg1;
+ (double)_categoryStartLocationForCategoryCount:(long long)arg1;
+ (id)datePositionForCategoryIndex:(long long)arg1 categoryCount:(long long)arg2 startDate:(id)arg3 calendar:(id)arg4;

- (void).cxx_destruct;
- (id)axisLabelIntervalComponentsForZoomLevelConfiguration:(id)arg1;
- (bool)canAddLabelForAxisLabelType:(long long)arg1;
- (long long)categoriesStartHourPosition;
- (id)categoryTitles;
- (id)initWithCurrentCalendar:(id)arg1 axisStyle:(id)arg2 categoryTitles:(id)arg3;
- (id)majorAxisIntervalComponents;
- (id)minorAxisIntervalComponents;
- (id)minorAxisIntervalComponentsForZoomLevelConfiguration:(id)arg1;
- (void)setCategoriesStartHourPosition:(long long)arg1;
- (void)setCategoryTitles:(id)arg1;
- (void)setMajorAxisIntervalComponents:(id)arg1;
- (void)setMinorAxisIntervalComponents:(id)arg1;
- (id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3;

@end
