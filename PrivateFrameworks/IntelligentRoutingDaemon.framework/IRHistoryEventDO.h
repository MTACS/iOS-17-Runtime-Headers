
@interface IRHistoryEventDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _candidateIdentifier;
    NSDate * _date;
    IREventDO * _event;
    IRMiLoPredictionEventDO * _miloPredictionEvent;
    IRSystemStateDO * _systemState;
}

@property (nonatomic, readonly) NSString *candidateIdentifier;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) IREventDO *event;
@property (nonatomic, readonly) IRMiLoPredictionEventDO *miloPredictionEvent;
@property (nonatomic, readonly) IRSystemStateDO *systemState;

+ (id)historyEventDOWithDate:(id)arg1 candidateIdentifier:(id)arg2 event:(id)arg3 miloPredictionEvent:(id)arg4 systemState:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidateIdentifier;
- (id)copyWithReplacementCandidateIdentifier:(id)arg1;
- (id)copyWithReplacementDate:(id)arg1;
- (id)copyWithReplacementEvent:(id)arg1;
- (id)copyWithReplacementMiloPredictionEvent:(id)arg1;
- (id)copyWithReplacementSystemState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 candidateIdentifier:(id)arg2 event:(id)arg3 miloPredictionEvent:(id)arg4 systemState:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistoryEventDO:(id)arg1;
- (id)miloPredictionEvent;
- (id)systemState;

@end
