
@interface FBSceneMonitorBehaviors : NSObject <NSCopying> {
    bool  _monitorsClientSettings;
    bool  _monitorsPairingStatus;
    bool  _monitorsSettings;
}

@property (nonatomic) bool monitorsClientSettings;
@property (nonatomic) bool monitorsPairingStatus;
@property (nonatomic) bool monitorsSettings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)monitorsClientSettings;
- (bool)monitorsPairingStatus;
- (bool)monitorsSettings;
- (void)setMonitorsClientSettings:(bool)arg1;
- (void)setMonitorsPairingStatus:(bool)arg1;
- (void)setMonitorsSettings:(bool)arg1;

@end
