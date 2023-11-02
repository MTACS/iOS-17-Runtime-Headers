
@interface ISCustomIconManager : NSObject

+ (id)sharedInstance;

- (id)_init;
- (id)overrideIconForURL:(id)arg1;
- (id)overrideResourceForBundleIdentifier:(id)arg1;
- (id)specialFolderTypeForURL:(id)arg1;

@end
