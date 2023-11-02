
@interface MatchedMedSchedule : INObject

@property (nonatomic, copy) NSString *medName;
@property (nonatomic, copy) NSString *remainingMedCount;
@property (nonatomic, copy) NSString *schedule;
@property (nonatomic, copy) NSString *scheduleID;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
