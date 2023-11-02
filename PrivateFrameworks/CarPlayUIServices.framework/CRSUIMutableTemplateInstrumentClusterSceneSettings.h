
@interface CRSUIMutableTemplateInstrumentClusterSceneSettings : CRSUIMutableInstrumentClusterSceneSettings <CRSUITemplateInstrumentClusterSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) unsigned long long layoutJustification;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic, copy) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic, readonly) unsigned long long showsCompass;
@property (nonatomic, readonly) unsigned long long showsETA;
@property (nonatomic, readonly) unsigned long long showsSpeedLimit;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSObject<OS_xpc_object> *templateEndpoint;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)proxiedApplicationBundleIdentifier;
- (void)setProxiedApplicationBundleIdentifier:(id)arg1;
- (void)setTemplateEndpoint:(id)arg1;
- (id)templateEndpoint;

@end
