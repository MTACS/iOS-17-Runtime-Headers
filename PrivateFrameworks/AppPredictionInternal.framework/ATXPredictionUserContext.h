
@interface ATXPredictionUserContext : ATXPredictionContextDomain {
    double  _absoluteLastAppLaunchDate;
    double  _absoluteLastUnlockDate;
    NSString * _lastAppActionLaunch;
    NSString * _lastAppLaunch;
    NSString * _secondMostRecentAppLaunch;
}

@property (nonatomic, readonly) NSString *lastAppActionLaunch;
@property (nonatomic, readonly) NSString *lastAppLaunch;
@property (nonatomic, readonly) NSDate *lastAppLaunchDate;
@property (nonatomic, readonly) NSDate *lastUnlockDate;
@property (nonatomic, readonly) NSString *secondMostRecentAppLaunch;

- (void).cxx_destruct;
- (id)description;
- (id)encodeAsProto;
- (id)initWithLastUnlockDate:(id)arg1 lastAppLaunch:(id)arg2 lastAppLaunchDate:(id)arg3 secondMostRecentAppLaunch:(id)arg4 lastAppActionLaunch:(id)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPredictionUserContext:(id)arg1;
- (id)jsonDict;
- (id)lastAppActionLaunch;
- (id)lastAppLaunch;
- (id)lastAppLaunchDate;
- (id)lastUnlockDate;
- (id)proto;
- (id)secondMostRecentAppLaunch;

@end
