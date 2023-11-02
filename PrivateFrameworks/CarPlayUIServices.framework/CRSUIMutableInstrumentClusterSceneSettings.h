
@interface CRSUIMutableInstrumentClusterSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings, CRSUIMutableMapStyleProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long layoutJustification;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic) unsigned long long showsCompass;
@property (nonatomic) unsigned long long showsETA;
@property (nonatomic) unsigned long long showsSpeedLimit;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)itemType;
- (unsigned long long)layoutJustification;
- (long long)mapStyle;
- (void)setItemType:(unsigned long long)arg1;
- (void)setLayoutJustification:(unsigned long long)arg1;
- (void)setMapStyle:(long long)arg1;
- (void)setShowsCompass:(unsigned long long)arg1;
- (void)setShowsETA:(unsigned long long)arg1;
- (void)setShowsSpeedLimit:(unsigned long long)arg1;
- (unsigned long long)showsCompass;
- (unsigned long long)showsETA;
- (unsigned long long)showsSpeedLimit;

@end
