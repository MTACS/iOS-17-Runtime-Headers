
@interface MLModelCollection : NSObject {
    NSString * _deploymentID;
    NSDictionary * _entries;
    NSString * _identifier;
    NSString * _namespaceName;
    TRIClient * _trialClient;
}

@property (nonatomic, copy) NSString *deploymentID;
@property (nonatomic, copy) NSDictionary *entries;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *namespaceName;
@property (nonatomic, readonly) TRIClient *trialClient;

+ (id)_namespaceNameFromCollectionIdentifier:(id)arg1;
+ (id)beginAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)endAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (Class)getTrialClientClass;
+ (Class)getTrialDownloadOptionsClass;
+ (Class)getTrialExperimentIdentifiersClass;
+ (Class)getTrialFactorClass;
+ (Class)getTrialFactorLevelClass;
+ (Class)getTrialFileClass;
+ (Class)getTrialLevelClass;

- (void).cxx_destruct;
- (id)_downloadOptions;
- (bool)_downloadWithProgress:(id /* block */)arg1;
- (bool)_endAccess;
- (void)_handleTrialUpdateForNamespaceName:(id)arg1;
- (void)_populateEntries;
- (bool)_register;
- (void)_registerForUpdates;
- (void)_setDeploymentID;
- (id)deploymentID;
- (id)entries;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)namespaceName;
- (void)setDeploymentID:(id)arg1;
- (void)setEntries:(id)arg1;
- (id)trialClient;

@end
