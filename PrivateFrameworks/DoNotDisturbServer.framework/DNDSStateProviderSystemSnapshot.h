
@interface DNDSStateProviderSystemSnapshot : NSObject <NSCopying, NSMutableCopying> {
    NSArray * _activeAssertionUUIDs;
    NSDictionary * _activeDateIntervalByAssertionUUID;
    NSArray * _assertions;
    unsigned long long  _interruptionBehaviorSetting;
    NSDate * _lastUpdate;
    unsigned long long  _lostModeState;
}

@property (nonatomic, readonly, copy) NSArray *activeAssertionUUIDs;
@property (nonatomic, readonly, copy) NSDictionary *activeDateIntervalByAssertionUUID;
@property (nonatomic, readonly, copy) NSArray *assertions;
@property (nonatomic, readonly) unsigned long long interruptionBehaviorSetting;
@property (nonatomic, readonly, copy) NSDate *lastUpdate;
@property (nonatomic, readonly) unsigned long long lostModeState;

- (void).cxx_destruct;
- (id)_initWithAssertions:(id)arg1 activeAssertionUUIDs:(id)arg2 activeDateIntervalByAssertionUUID:(id)arg3 interruptionBehaviorSetting:(unsigned long long)arg4 lostModeState:(unsigned long long)arg5 lastUpdate:(id)arg6;
- (id)_initWithSnapshot:(id)arg1;
- (id)activeAssertionUUIDs;
- (id)activeDateIntervalByAssertionUUID;
- (id)assertions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)interruptionBehaviorSetting;
- (bool)isEqual:(id)arg1;
- (id)lastUpdate;
- (unsigned long long)lostModeState;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
