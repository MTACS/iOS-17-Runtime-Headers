
@interface SXWebContentComponentDeveloperSettingsProvider : NSObject <SXWebContentComponentDeveloperSettingsProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)developerSettings;

@end
