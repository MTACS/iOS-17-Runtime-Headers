
@interface SBSConnectedDisplayInfoFactory : NSObject

- (id)_effectiveSettingsForDisplayConfiguration:(id)arg1 defaults:(id)arg2;
- (unsigned long long)_supportedScalesForDisplayConfiguration:(id)arg1 defaults:(id)arg2 error:(out id*)arg3;
- (id)connectedDisplayInfoForDisplayConfiguration:(id)arg1 externalDisplayDefaults:(id)arg2;

@end
