
@interface MatchedMedName : INObject

@property (nonatomic, copy) NSString *completionStatus;
@property (nonatomic, retain) NSNumber *dosage;
@property (nonatomic, copy) NSString *dosageUnit;
@property (nonatomic, retain) NSNumber *isScheduled;
@property (nonatomic, copy) NSString *loggedTime;
@property (nonatomic, copy) NSString *medicationID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *persistedUUID;
@property (nonatomic, copy) NSString *schedule;
@property (nonatomic, copy) NSString *scheduleID;
@property (nonatomic, retain) NSNumber *strength;
@property (nonatomic, copy) NSString *strengthUnit;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
