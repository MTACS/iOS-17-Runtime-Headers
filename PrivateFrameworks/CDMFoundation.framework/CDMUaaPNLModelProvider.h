
@interface CDMUaaPNLModelProvider : NSObject {
    FBSDisplayLayoutMonitorConfiguration * _frontboardConfig;
}

+ (id)createModelConfigurationFromURL:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (id)createModelConfigurationsFromURLs:(id)arg1 locale:(id)arg2 error:(id*)arg3;
+ (id)getCoreModelConfigurationForLocale:(id)arg1 bundlePath:(id)arg2 error:(id*)arg3;
+ (id)modelURLsForInstalledApps;
+ (id)retrieveAllAppBundleURLs;
+ (id)retrieveModelURLFromBundleURL:(id)arg1;

- (void).cxx_destruct;
- (id)foregroundBundeIdentifiers;
- (id)getForegroundModelConfigForLocale:(id)arg1 error:(id*)arg2;
- (id)getModelConfigsForLocale:(id)arg1 error:(id*)arg2;
- (id)getModelURLForForegroundApp;
- (id)getModelURLs:(id*)arg1;
- (id)getModelURLsFromDefaults;
- (id)init;

@end
