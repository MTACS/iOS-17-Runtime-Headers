
@interface DNDSModeAssertionLifetimeRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding> {
    NSString * _behavior;
    NSNumber * _endDate;
    NSString * _eventUniqueID;
    NSNumber * _latitude;
    NSString * _lifetimeType;
    NSNumber * _longitude;
    NSNumber * _occurrenceDate;
    NSNumber * _onlyDuringEvent;
    NSNumber * _radius;
    NSString * _regionIdentifier;
    NSString * _scheduleIdentifier;
    NSNumber * _startDate;
}

@property (nonatomic, retain) NSString *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *endDate;
@property (nonatomic, retain) NSString *eventUniqueID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSString *lifetimeType;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *occurrenceDate;
@property (nonatomic, retain) NSNumber *onlyDuringEvent;
@property (nonatomic, retain) NSNumber *radius;
@property (nonatomic, retain) NSString *regionIdentifier;
@property (nonatomic, retain) NSString *scheduleIdentifier;
@property (nonatomic, retain) NSNumber *startDate;
@property (readonly) Class superclass;

+ (id)recordForAssertionLifetime:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; }*)arg2;

- (void).cxx_destruct;
- (id)behavior;
- (id)dictionaryWithKeys:(const struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; }*)arg1 options:(unsigned long long)arg2;
- (id)endDate;
- (id)eventUniqueID;
- (id)latitude;
- (id)lifetimeType;
- (id)longitude;
- (id)object;
- (id)occurrenceDate;
- (id)onlyDuringEvent;
- (id)radius;
- (id)regionIdentifier;
- (id)scheduleIdentifier;
- (void)setBehavior:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventUniqueID:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLifetimeType:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setOccurrenceDate:(id)arg1;
- (void)setOnlyDuringEvent:(id)arg1;
- (void)setRadius:(id)arg1;
- (void)setRegionIdentifier:(id)arg1;
- (void)setScheduleIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
