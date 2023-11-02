
@interface PPEventMetadata : NSObject <NSCopying> {
    double  _earliestStartTime;
    unsigned long long  _eventCount;
    unsigned long long  _eventHasAlarmCount;
    unsigned long long  _ocnt_precomputedHash;
    NSDictionary * _titlesAndParticipants;
}

@property (nonatomic, readonly) double earliestStartTime;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (nonatomic, readonly) unsigned long long eventHasAlarmCount;
@property (nonatomic, readonly) NSDictionary *titlesAndParticipants;

+ (id)eventMetadataWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 eventCount:(unsigned long long)arg3 eventHasAlarmCount:(unsigned long long)arg4;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithReplacementEarliestStartTime:(double)arg1;
- (id)copyWithReplacementEventCount:(unsigned long long)arg1;
- (id)copyWithReplacementEventHasAlarmCount:(unsigned long long)arg1;
- (id)copyWithReplacementTitlesAndParticipants:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)earliestStartTime;
- (unsigned long long)eventCount;
- (unsigned long long)eventHasAlarmCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 eventCount:(unsigned long long)arg3 eventHasAlarmCount:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventMetadata:(id)arg1;
- (id)titlesAndParticipants;

@end
