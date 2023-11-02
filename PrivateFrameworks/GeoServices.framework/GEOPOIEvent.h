
@interface GEOPOIEvent : NSObject <NSSecureCoding> {
    NSArray * _categories;
    struct { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    NSDateInterval * _dateInterval;
    long long  _expectedAttendance;
    NSArray * _hours;
    GEOMapItemIdentifier * _identifier;
    GEOCacheInvalidationData * _invalidationData;
    NSString * _localizedName;
    NSArray * _performers;
    NSArray * _relatedPOIIdentifiers;
    NSTimeZone * _timeZone;
    bool  _updateRequired;
}

@property (nonatomic, retain) NSArray *categories;
@property (nonatomic) struct { double x1; double x2; } centerCoordinate;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic) long long expectedAttendance;
@property (nonatomic, retain) NSArray *hours;
@property (nonatomic, retain) GEOMapItemIdentifier *identifier;
@property (nonatomic, retain) GEOCacheInvalidationData *invalidationData;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSArray *performers;
@property (nonatomic, retain) NSArray *relatedPOIIdentifiers;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (getter=isUpdateRequired, nonatomic, readonly) bool updateRequired;

+ (bool)isUpdateRequiredForInvalidationData:(id)arg1;
+ (bool)isUpdateRequiredForInvalidationToken:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categories;
- (struct { double x1; double x2; })centerCoordinate;
- (bool)configureWithComponents:(id)arg1;
- (bool)configureWithPOIComponent:(id)arg1;
- (bool)configureWithPlaceInfoComponent:(id)arg1;
- (id)dateInterval;
- (id)dateIntervalFromDateTimeRanges:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedAttendance;
- (void)geoPOIEventCommonInit;
- (id)hours;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapItemIdentifier:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (id)invalidationData;
- (id)invalidationToken;
- (bool)isUpdateRequired;
- (id)localizedName;
- (id)performers;
- (id)relatedPOIIdentifiers;
- (void)setCategories:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDateInterval:(id)arg1;
- (void)setExpectedAttendance:(long long)arg1;
- (void)setHours:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvalidationData:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setPerformers:(id)arg1;
- (void)setRelatedPOIIdentifiers:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
