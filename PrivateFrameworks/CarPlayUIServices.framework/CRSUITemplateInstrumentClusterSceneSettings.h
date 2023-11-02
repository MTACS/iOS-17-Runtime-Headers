
@interface CRSUITemplateInstrumentClusterSceneSettings : CRSUIInstrumentClusterSceneSettings <CRSUITemplateInstrumentClusterSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) unsigned long long layoutJustification;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic, readonly, copy) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic, readonly) unsigned long long showsCompass;
@property (nonatomic, readonly) unsigned long long showsETA;
@property (nonatomic, readonly) unsigned long long showsSpeedLimit;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *templateEndpoint;

- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)proxiedApplicationBundleIdentifier;
- (id)templateEndpoint;

@end
