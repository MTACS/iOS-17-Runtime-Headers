
@interface PSFaceTimeSettingsDetail : NSObject <PSSettingsLink>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)preferencesURL;

@end
