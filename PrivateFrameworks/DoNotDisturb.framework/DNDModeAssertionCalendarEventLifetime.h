
@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime {
    NSString * _eventUniqueID;
    NSDate * _occurrenceDate;
    bool  _onlyDuringEvent;
}

@property (nonatomic, readonly, copy) NSString *eventUniqueID;
@property (nonatomic, readonly, copy) NSDate *occurrenceDate;
@property (getter=isOnlyDuringEvent, nonatomic, readonly) bool onlyDuringEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventUniqueID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 onlyDuringEvent:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isOnlyDuringEvent;
- (unsigned long long)lifetimeType;
- (id)occurrenceDate;

@end
