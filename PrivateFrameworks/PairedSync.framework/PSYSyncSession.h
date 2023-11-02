
@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _activities;
    NSDictionary * _activityMap;
    NSUUID * _pairingIdentifier;
    NSUUID * _sessionIdentifier;
    bool  _supportsMigrationSync;
    long long  _switchIndex;
    unsigned long long  _syncSessionState;
    unsigned long long  _syncSessionType;
}

@property (nonatomic, retain) NSArray *activities;
@property (nonatomic, retain) NSUUID *pairingIdentifier;
@property (nonatomic, retain) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) double sessionProgress;
@property (nonatomic) bool supportsMigrationSync;
@property (nonatomic) long long switchIndex;
@property (nonatomic) unsigned long long syncSessionState;
@property (nonatomic) unsigned long long syncSessionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)activities;
- (id)activityForLabel:(id)arg1;
- (id)activityForService:(id)arg1;
- (id)completedActivities;
- (id)completedActivityLabelsSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstIncompleteActivity;
- (unsigned long long)hash;
- (id)incompleteActivities;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1 switchIndex:(long long)arg2 sessionIdentifier:(id)arg3 syncSessionType:(unsigned long long)arg4 supportsMigrationSync:(bool)arg5 activities:(id)arg6 state:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (id)pairingIdentifier;
- (id)runningActivities;
- (id)sessionIdentifier;
- (double)sessionProgress;
- (void)setActivities:(id)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSupportsMigrationSync:(bool)arg1;
- (void)setSwitchIndex:(long long)arg1;
- (void)setSyncSessionState:(unsigned long long)arg1;
- (void)setSyncSessionType:(unsigned long long)arg1;
- (bool)supportsMigrationSync;
- (long long)switchIndex;
- (id)syncSessionByReplacingActivity:(id)arg1;
- (id)syncSessionByUpdatingActivities:(id)arg1;
- (id)syncSessionByUpdatingSyncSessionState:(unsigned long long)arg1;
- (unsigned long long)syncSessionState;
- (unsigned long long)syncSessionType;

@end