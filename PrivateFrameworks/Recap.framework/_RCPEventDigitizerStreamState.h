
@interface _RCPEventDigitizerStreamState : NSObject {
    long long  _countOfContactsChangeAmount;
    long long  _countOfContactsTouching;
    bool  _countOfContactsTouchingDidChange;
    RCPEventEnvironment * _environment;
    long long  _eventNumber;
    double  _streamStartTimeInterval;
    double  _timeIntervalSinceStreamStart;
}

@property (nonatomic, readonly) long long countOfContactsChangeAmount;
@property (nonatomic) long long countOfContactsTouching;
@property (nonatomic) bool countOfContactsTouchingDidChange;
@property (nonatomic, retain) RCPEventEnvironment *environment;
@property (nonatomic) long long eventNumber;
@property (nonatomic) double streamStartTimeInterval;
@property (nonatomic) double timeIntervalSinceStreamStart;

+ (id)streamStateWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (long long)countOfContactsChangeAmount;
- (long long)countOfContactsTouching;
- (bool)countOfContactsTouchingDidChange;
- (id)environment;
- (long long)eventNumber;
- (void)ingestEvent:(id)arg1;
- (void)setCountOfContactsTouching:(long long)arg1;
- (void)setCountOfContactsTouchingDidChange:(bool)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setEventNumber:(long long)arg1;
- (void)setStreamStartTimeInterval:(double)arg1;
- (void)setTimeIntervalSinceStreamStart:(double)arg1;
- (double)streamStartTimeInterval;
- (double)timeIntervalSinceStreamStart;

@end
