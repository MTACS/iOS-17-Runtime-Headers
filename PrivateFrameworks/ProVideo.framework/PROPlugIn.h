
@interface PROPlugIn : NSObject

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)apiUsedByPlugInForProtocol:(id)arg1;
- (id)blockedLookupKey;
- (id)bundle;
- (id)className;
- (id)delegate;
- (id)displayName;
- (id)group;
- (id)helpURL;
- (id)implementedProtocols;
- (id)infoDictionary;
- (id)infoString;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;
- (bool)is3rdParty;
- (bool)isBlocked;
- (bool)isEqualToPlugIn:(id)arg1;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setIsBlocked:(bool)arg1;
- (id)sharedPlugInInstance;
- (struct __CFUUID { }*)uuid;
- (id)version;

@end
