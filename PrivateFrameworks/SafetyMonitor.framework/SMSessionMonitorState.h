
@interface SMSessionMonitorState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _currentRegionState;
    NSDate * _date;
    bool  _dirty;
    NSUUID * _sessionIdentifier;
    bool  _triggerConfirmed;
    bool  _triggerPending;
}

@property (nonatomic) unsigned long long currentRegionState;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) bool dirty;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;
@property (nonatomic) bool triggerConfirmed;
@property (nonatomic) bool triggerPending;

+ (id)regionStateToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentRegionState;
- (id)date;
- (id)description;
- (bool)dirty;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 currentRegionState:(unsigned long long)arg2 triggerPending:(bool)arg3 triggerConfirmed:(bool)arg4 date:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)markDirty;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sessionIdentifier;
- (void)setCurrentRegionState:(unsigned long long)arg1;
- (void)setDirty:(bool)arg1;
- (void)setTriggerConfirmed:(bool)arg1;
- (void)setTriggerPending:(bool)arg1;
- (bool)triggerConfirmed;
- (bool)triggerPending;

@end
