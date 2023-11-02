
@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {
    NSMutableSet * _extensionConnections;
    NSObject<OS_dispatch_group> * _initialStateGroup;
    NSString * _rootSandboxPath;
    NSError * _stashedError;
    NSDictionary * _tagToTagState;
}

- (bool)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2;
- (bool)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithBundle:(id)arg1;

@end
