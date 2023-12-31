
@interface GEOLinkedService : NSObject {
    NSArray * _businessHours;
    NSArray * _cachedBusinessHours;
    bool  _checkedForBusinessHoursAlready;
    GEOPDLinkedService * _linkedService;
    NSString * _localizedCategoryName;
    GEOFeatureStyleAttributes * _styleAttributes;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSArray *businessHours;
@property (nonatomic, retain) NSString *localizedCategoryName;
@property (nonatomic, retain) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)businessHours;
- (id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2;
- (id)localizedCategoryName;
- (void)setBusinessHours:(id)arg1;
- (void)setLocalizedCategoryName:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)styleAttributes;
- (id)timeZone;

@end
