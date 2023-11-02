
@interface CRPluginsController : NSObject

- (bool)isApplicationInstalledWithMaxRetries:(int)arg1 bundleName:(id)arg2;
- (bool)rebuildApplicationDataBase;

@end
