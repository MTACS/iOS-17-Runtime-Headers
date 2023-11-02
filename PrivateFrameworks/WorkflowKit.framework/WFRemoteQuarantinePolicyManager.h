
@interface WFRemoteQuarantinePolicyManager : NSObject {
    CKContainer * _container;
    CKDatabase * _database;
    NSBundle * _localPolicyBundle;
}

@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, readonly) NSBundle *localPolicyBundle;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)container;
- (id)database;
- (bool)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)latestRemotePolicyAssetBundle;
- (id)localPolicyBundle;
- (id)localizedString:(id)arg1;
- (bool)persistAssetToDisk:(id)arg1 error:(id*)arg2;
- (id)policyAssetBundle;
- (id)policyString;
- (id)policyStringForBundleIfValid:(id)arg1;
- (unsigned long long)policyVersion;
- (id)prepareDirectoryForAssetWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)processAsset:(id)arg1 error:(id*)arg2;
- (void)setContainer:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)updatePolicyWithXPCActivity:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (void)scheduleRegularPolicyUpdatesWithDatabaseProvider:(id)arg1;

@end
