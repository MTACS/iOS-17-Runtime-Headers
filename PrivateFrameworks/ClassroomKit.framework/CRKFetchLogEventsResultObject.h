
@interface CRKFetchLogEventsResultObject : CATTaskResultObject {
    NSDate * _currentDate;
    CRKEventLog * _eventLog;
    NSString * _sessionToken;
}

@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic, retain) CRKEventLog *eventLog;
@property (nonatomic, copy) NSString *sessionToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentDate;
- (void)encodeWithCoder:(id)arg1;
- (id)eventLog;
- (id)initWithCoder:(id)arg1;
- (id)sessionToken;
- (void)setCurrentDate:(id)arg1;
- (void)setEventLog:(id)arg1;
- (void)setSessionToken:(id)arg1;

@end
