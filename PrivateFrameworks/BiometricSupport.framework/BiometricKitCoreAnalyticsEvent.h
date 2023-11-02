
@interface BiometricKitCoreAnalyticsEvent : NSObject {
    NSDictionary * _boundedFieldLimits;
    NSNumber * _deviceEnclosureColor;
    NSNumber * _displayOn;
    NSNumber * _eventCanceled;
    NSString * _eventName;
    NSDate * _previousEventDate;
    NSArray * _privateProperties;
    NSNumber * _timeSinceLastEnrollment;
    NSNumber * _timeSinceLastEnrollmentBinned;
    NSNumber * _timeSinceLastEvent;
}

@property (nonatomic, retain) NSNumber *deviceEnclosureColor;
@property (nonatomic, retain) NSNumber *displayOn;
@property (nonatomic, retain) NSNumber *eventCanceled;
@property (nonatomic, retain) NSDate *previousEventDate;
@property (nonatomic, retain) NSNumber *timeSinceLastEnrollment;
@property (nonatomic, retain) NSNumber *timeSinceLastEnrollmentBinned;
@property (nonatomic, retain) NSNumber *timeSinceLastEvent;

- (void).cxx_destruct;
- (id)deviceEnclosureColor;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationArchiving:(bool)arg1;
- (id)dictionaryRepresentationForClass:(Class)arg1;
- (id)displayOn;
- (id)eventCanceled;
- (id)getEventDictionary;
- (void)incrementCountField:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 dictionary:(id)arg2;
- (id)initWithPersistedDataWithName:(id)arg1;
- (void)logAnalyticsDictionary:(id)arg1;
- (void)persistData;
- (bool)postEvent;
- (id)previousEventDate;
- (void)reset;
- (void)resetClass:(Class)arg1;
- (void)setDeviceEnclosureColor:(id)arg1;
- (void)setDisplayOn:(id)arg1;
- (void)setEventCanceled:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setPreviousEventDate:(id)arg1;
- (void)setTimeSinceLastEnrollment:(id)arg1;
- (void)setTimeSinceLastEnrollmentBinned:(id)arg1;
- (void)setTimeSinceLastEvent:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)timeSinceLastEnrollment;
- (id)timeSinceLastEnrollmentBinned;
- (id)timeSinceLastEvent;
- (void)updateBoundedFieldValue;
- (id)valueForUndefinedKey:(id)arg1;

@end
