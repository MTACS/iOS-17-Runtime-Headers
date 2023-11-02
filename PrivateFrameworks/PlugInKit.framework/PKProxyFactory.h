
@interface PKProxyFactory : NSObject <PKProxyFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasLSDatabaseAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultFactory;

- (id)applicationProxyForBundleURL:(id)arg1;
- (id)defaultApplicationWorkspace;
- (id)extensionPointForIdentifier:(id)arg1 platform:(id)arg2;
- (id)extensionPointRecordEnumeratorForExtensionPointIdentifier:(id)arg1;
- (bool)hasLSDatabaseAccess;
- (id)plugInKitProxyForURL:(id)arg1;
- (id)plugInKitProxyForUUID:(id)arg1;
- (id)plugInRecordEnumerator;
- (id)plugInRecordEnumeratorForExtensionPointRecord:(id)arg1;
- (id)plugInRecordEnumeratorWithExtensionPointName:(id)arg1 platform:(unsigned int)arg2;
- (id)plugInRecordForIdentifier:(id)arg1;
- (id)plugInRecordForUUID:(id)arg1;
- (id)pluginKitProxyForIdentifier:(id)arg1;

@end
