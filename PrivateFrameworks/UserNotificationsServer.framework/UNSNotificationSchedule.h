
@interface UNSNotificationSchedule : NSObject {
    NSDate * _previousTriggerDate;
}

@property (nonatomic, retain) NSDate *previousTriggerDate;

- (void).cxx_destruct;
- (id)_dateFormatter;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)previousTriggerDate;
- (void)setPreviousTriggerDate:(id)arg1;

@end
