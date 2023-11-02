
@interface EKInviteeAlternativeTime : NSObject {
    NSArray * _conflictedParticipants;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSArray *conflictedParticipants;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)conflictedParticipants;
- (id)description;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3;
- (void)setConflictedParticipants:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
