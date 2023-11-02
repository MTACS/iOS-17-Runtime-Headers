
@interface IRReplayEventDO : NSObject <NSCopying, NSSecureCoding> {
    IRCandidatesContainerDO * _candidatesContainer;
    NSString * _contextChangeReason;
    NSDate * _date;
    IRMiloLslPredictionDO * _miloLslPrediction;
    IRNearbyDeviceContainerDO * _nearbyDeviceContainerDO;
    IRSystemStateDO * _systemState;
}

@property (nonatomic, readonly) IRCandidatesContainerDO *candidatesContainer;
@property (nonatomic, readonly) NSString *contextChangeReason;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) IRMiloLslPredictionDO *miloLslPrediction;
@property (nonatomic, readonly) IRNearbyDeviceContainerDO *nearbyDeviceContainerDO;
@property (nonatomic, readonly) IRSystemStateDO *systemState;

+ (id)replayEventDOWithDate:(id)arg1 contextChangeReason:(id)arg2 candidatesContainer:(id)arg3 miloLslPrediction:(id)arg4 systemState:(id)arg5 nearbyDeviceContainerDO:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidatesContainer;
- (id)contextChangeReason;
- (id)copyWithReplacementCandidatesContainer:(id)arg1;
- (id)copyWithReplacementContextChangeReason:(id)arg1;
- (id)copyWithReplacementDate:(id)arg1;
- (id)copyWithReplacementMiloLslPrediction:(id)arg1;
- (id)copyWithReplacementNearbyDeviceContainerDO:(id)arg1;
- (id)copyWithReplacementSystemState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 contextChangeReason:(id)arg2 candidatesContainer:(id)arg3 miloLslPrediction:(id)arg4 systemState:(id)arg5 nearbyDeviceContainerDO:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReplayEventDO:(id)arg1;
- (id)miloLslPrediction;
- (id)nearbyDeviceContainerDO;
- (id)systemState;

@end
