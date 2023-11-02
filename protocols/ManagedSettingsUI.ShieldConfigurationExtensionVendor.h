
@protocol ManagedSettingsUI.ShieldConfigurationExtensionVendor

@required

- (void)fetchConfigurationDataForApplication:(void *)arg1 localizedApplicationDisplayName:(void *)arg2 categoryTokenData:(void *)arg3 localizedCategoryDisplayName:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchConfigurationDataForApplication:(void *)arg1 tokenData:(void *)arg2 localizedDisplayName:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchConfigurationDataForWebDomain:(void *)arg1 categoryTokenData:(void *)arg2 localizedDisplayName:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchConfigurationDataForWebDomain:(void *)arg1 tokenData:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
