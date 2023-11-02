
@interface CRSUIInstrumentClusterSceneSettings : UICarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) unsigned long long layoutJustification;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic, readonly) unsigned long long showsCompass;
@property (nonatomic, readonly) unsigned long long showsETA;
@property (nonatomic, readonly) unsigned long long showsSpeedLimit;
@property (readonly) Class superclass;

- (id)description;
- (unsigned long long)itemType;
- (unsigned long long)layoutJustification;
- (long long)mapStyle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)showsCompass;
- (unsigned long long)showsETA;
- (unsigned long long)showsSpeedLimit;

@end
