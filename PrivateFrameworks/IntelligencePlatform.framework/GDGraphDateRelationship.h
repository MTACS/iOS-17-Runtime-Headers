
@interface GDGraphDateRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allEndDate;
    NSArray * _allOccurrenceDate;
    NSArray * _allStartDate;
    NSDate * _endDate;
    NSDate * _occurrenceDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSArray *allEndDate;
@property (nonatomic, readonly, copy) NSArray *allOccurrenceDate;
@property (nonatomic, readonly, copy) NSArray *allStartDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *occurrenceDate;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allEndDate;
- (id)allOccurrenceDate;
- (id)allStartDate;
- (id)endDate;
- (Class)graphObjectType;
- (id)initWithStartDateField:(id)arg1 endDateField:(id)arg2 occurrenceDateField:(id)arg3 allStartDateField:(id)arg4 allEndDateField:(id)arg5 allOccurrenceDateField:(id)arg6;
- (id)occurrenceDate;
- (id)startDate;

@end
