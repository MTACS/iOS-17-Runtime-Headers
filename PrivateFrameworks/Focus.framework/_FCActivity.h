
@interface _FCActivity : NSObject <FCActivityDescribing> {
    NSDate * _activityCreationDate;
    NSArray * _activityLifetimeDescriptions;
    NSString * _activityLifetimesAlternativeDescription;
    DNDMode * _dndMode;
}

@property (nonatomic, readonly, copy) NSString *activityColorName;
@property (setter=_setActivityCreationDate:, nonatomic, copy) NSDate *activityCreationDate;
@property (nonatomic, readonly, copy) NSString *activityDetailText;
@property (nonatomic, readonly, copy) NSString *activityDisplayName;
@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (setter=_setActivityLifetimeDescriptions:, nonatomic, copy) NSArray *activityLifetimeDescriptions;
@property (setter=_setActivityLifetimesAlternativeDescription:, nonatomic, copy) NSString *activityLifetimesAlternativeDescription;
@property (nonatomic, readonly) long long activitySemanticType;
@property (nonatomic, readonly, copy) NSURL *activitySettingsURL;
@property (nonatomic, readonly, copy) NSURL *activitySetupURL;
@property (nonatomic, readonly, copy) NSString *activitySymbolImageName;
@property (nonatomic, readonly, copy) NSUUID *activityUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_dndMode, setter=_setDndMode:, copy) DNDMode *dndMode;
@property (getter=isDrivingActivity, nonatomic, readonly) bool drivingActivity;
@property (readonly) unsigned long long hash;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (getter=isSleepActivity, nonatomic, readonly) bool sleepActivity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDiscreteLifetimes;

- (void).cxx_destruct;
- (id)_dndMode;
- (void)_setActivityCreationDate:(id)arg1;
- (void)_setActivityLifetimeDescriptions:(id)arg1;
- (void)_setActivityLifetimesAlternativeDescription:(id)arg1;
- (void)_setDndMode:(id)arg1;
- (bool)_updateMode:(id)arg1;
- (id)activityColorName;
- (id)activityCreationDate;
- (id)activityDetailText;
- (id)activityDisplayName;
- (id)activityIdentifier;
- (id)activityLifetimeDescriptions;
- (id)activityLifetimesAlternativeDescription;
- (long long)activitySemanticType;
- (id)activitySettingsURL;
- (id)activitySetupURL;
- (id)activitySymbolImageName;
- (id)activityUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMode:(id)arg1;
- (bool)isDrivingActivity;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (bool)isSleepActivity;
- (bool)supportsDiscreteLifetimes;

@end
