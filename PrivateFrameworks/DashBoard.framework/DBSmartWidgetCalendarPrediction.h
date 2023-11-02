
@interface DBSmartWidgetCalendarPrediction : DBSmartWidgetPrediction {
    NSArray * _events;
    bool  _soonestEvent;
}

@property (nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *events;
@property (getter=isSoonestEvent, nonatomic) bool soonestEvent;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool variousEndDates;

+ (long long)baseScore;
+ (id)earliestStartDate;
+ (double)initialValidInterval;
+ (SEL)isEqualClassSelector;
+ (id)latestStartDate;
+ (double)maxValue;
+ (double)minValue;
+ (id)now;
+ (void)setNow:(id)arg1;

- (void).cxx_destruct;
- (id)_uuidFromString:(id)arg1;
- (id /* block */)actionBlock;
- (void)addEvent:(id)arg1;
- (bool)allDay;
- (id)defaultValidRanges;
- (id)endDate;
- (id)events;
- (id)image;
- (id)initWithEvent:(id)arg1;
- (double)initialValidInterval;
- (bool)isEqualToCalendarPrediction:(id)arg1;
- (bool)isSoonestEvent;
- (id)predictedObject;
- (id)predictedObjectDescription;
- (void)setSoonestEvent:(bool)arg1;
- (bool)showImageBorder;
- (id)startDate;
- (id)subtitle;
- (long long)tieBreakScore;
- (id)title;
- (void)updateRangeIfNeeded:(id)arg1;
- (bool)updateWithPrediction:(id)arg1;
- (double)value;
- (bool)variousEndDates;

@end
