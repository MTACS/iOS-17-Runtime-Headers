
@interface EKInviteeTimeSpan : NSObject <NSCopying> {
    NSMutableArray * _conflictedParticipants;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSMutableArray *conflictedParticipants;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)conflictedParticipants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (id)init;
- (void)setConflictedParticipants:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
