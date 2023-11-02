
@interface RTProximityEvent : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _combinedFrequencyScores;
    NSArray * _combinedRecencyScores;
    NSArray * _combinedSignificanceScores;
    NSDate * _endDate;
    NSUUID * _eventID;
    long long  _relationship;
    double  _socialScore;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSArray *combinedFrequencyScores;
@property (nonatomic, readonly, copy) NSArray *combinedRecencyScores;
@property (nonatomic, readonly, copy) NSArray *combinedSignificanceScores;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSUUID *eventID;
@property (nonatomic, readonly) long long relationship;
@property (nonatomic, readonly) double socialScore;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)convertContactFrequencyToString:(long long)arg1;
+ (id)convertContactRecencyToString:(long long)arg1;
+ (id)convertContactSignificanceToString:(long long)arg1;
+ (id)convertPersonRelationshipToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)combinedFrequencyScores;
- (id)combinedRecencyScores;
- (id)combinedSignificanceScores;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)eventID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 relationship:(long long)arg4 socialScore:(double)arg5 combinedFrequencyScores:(id)arg6 combinedRecencyScores:(id)arg7 combinedSignificanceScores:(id)arg8;
- (bool)isEqual:(id)arg1;
- (long long)relationship;
- (double)socialScore;
- (id)startDate;

@end
