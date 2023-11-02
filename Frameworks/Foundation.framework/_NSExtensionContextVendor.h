
@interface _NSExtensionContextVendor : NSObject

+ (Class)_extensionContextClass;
+ (id)_extensionDictionary;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening;
+ (void)_startListening:(bool)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)_extensionContextForUUID:(id)arg1;
- (id)_init;
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;
- (void)_tearDownContextWithUUID:(id)arg1;
- (id)init;

@end
