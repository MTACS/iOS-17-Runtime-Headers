
@interface WAUtil : NSObject

+ (id)_generateInvocationForMethod:(void*)arg1;
+ (id)_getBasePersistenceKeychainQuery;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg1;
+ (void)addDeltaNSNumberForTelemetryKey:(id)arg1 dictKey:(id)arg2 dictModule:(id)arg3 telDict:(id)arg4 recentDict:(id)arg5 oldDict:(id)arg6;
+ (id)deviceName;
+ (unsigned long long)getAWDTimestamp;
+ (id)getCopyOfMessage:(id)arg1 withNumericalValuesSubstractedByValuesInMessage:(id)arg2;
+ (id)getMessageInstanceForKey:(id)arg1 andGroupType:(long long)arg2;
+ (id)getObscureKey;
+ (id)getTokenForIdentifier:(id)arg1;
+ (id)getValueForEntitlementForCurrentProcess:(id)arg1;
+ (id)groupTypeToString:(long long)arg1;
+ (void)incrementValueForKey:(id)arg1 inMutableDict:(id)arg2;
+ (bool)isMacAddress:(id)arg1;
+ (bool)isPreinstalledWiFiAppVisible;
+ (bool)isWiFiAppInstalled;
+ (bool)isWildcardMacAddress:(id)arg1;
+ (void)logNestedDictionary:(id)arg1 indent:(int)arg2 prefix:(id)arg3;
+ (id)rotateObscureKey;
+ (id)rotateUUIDsForMessage:(id)arg1;
+ (bool)storeToken:(id)arg1 withIdentifier:(id)arg2;
+ (void)sumNSNumberForKey:(id)arg1 dstDict:(id)arg2 otherDict:(id)arg3;
+ (id)trimTokenForLogging:(id)arg1;
+ (id)unobscureModelData:(id)arg1 forModelkey:(id)arg2;

@end
