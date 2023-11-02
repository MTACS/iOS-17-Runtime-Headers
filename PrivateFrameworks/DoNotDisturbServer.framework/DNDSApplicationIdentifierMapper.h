
@interface DNDSApplicationIdentifierMapper : NSObject <DNDSApplicationIdentifierMapping>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_iOSBundleIDForMacOSBundleID:(id)arg1;
- (id)_macOSBundleIDForiOSBundleID:(id)arg1;
- (id)applicationIdentifierForFileWithSourceApplicationIdentifier:(id)arg1;
- (id)applicationIdentifierForSyncWithSourceApplicationIdentifier:(id)arg1;
- (id)applicationIdentifierForTargetPlatform:(unsigned long long)arg1 withSourceApplicationIdentifier:(id)arg2;

@end
