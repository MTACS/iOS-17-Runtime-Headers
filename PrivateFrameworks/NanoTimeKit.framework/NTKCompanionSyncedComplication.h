
@interface NTKCompanionSyncedComplication : NSObject {
    NSString * _appBundleIdentifier;
    NSString * _clientIdentifier;
    NSString * _companionBundleIdentifier;
    CLKComplicationDescriptor * _descriptor;
    NSString * _fallbackName;
    NSString * _localizedName;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) CLKComplicationDescriptor *descriptor;
@property (nonatomic, readonly) NSString *localizedName;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)clientIdentifier;
- (id)descriptor;
- (id)initWithRemoteApplication:(id)arg1 descriptor:(id)arg2;
- (id)localizedName;

@end
