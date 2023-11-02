
@interface SBHApplicationDataSource : NSObject <SBHIconModelApplicationDataSource> {
    FBSALOToken * _addApplicationsObservationToken;
    FBSALOToken * _addPlaceholdersObservationToken;
    FBSApplicationLibrary * _appLibrary;
    NSMutableDictionary * _applicationPlaceholders;
    NSMutableDictionary * _applications;
    FBSALOToken * _demoteApplicationsObservationToken;
    NSHashTable * _observers;
    FBSALOToken * _removeApplicationsObservationToken;
    FBSALOToken * _removedPlaceholdersObservationToken;
    FBSALOToken * _replaceApplicationsObservationToken;
    FBSALOToken * _updateApplicationsObservationToken;
}

@property (nonatomic, readonly) FBSALOToken *addApplicationsObservationToken;
@property (nonatomic, readonly) FBSALOToken *addPlaceholdersObservationToken;
@property (nonatomic, readonly) FBSApplicationLibrary *appLibrary;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FBSALOToken *demoteApplicationsObservationToken;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSALOToken *removeApplicationsObservationToken;
@property (nonatomic, readonly) FBSALOToken *removedPlaceholdersObservationToken;
@property (nonatomic, readonly) FBSALOToken *replaceApplicationsObservationToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FBSALOToken *updateApplicationsObservationToken;

- (void).cxx_destruct;
- (void)_didAddApplicationsInfo:(id)arg1;
- (void)_didAddPlaceholders:(id)arg1;
- (void)_didRemoveApplicationsInfo:(id)arg1;
- (void)_didRemovePlaceholders:(id)arg1;
- (void)_didReplaceApplicationsInfo:(id)arg1;
- (id)addApplicationsObservationToken;
- (void)addIconModelApplicationDataSourceObserver:(id)arg1;
- (id)addPlaceholdersObservationToken;
- (id)allApplicationPlaceholdersForIconModel:(id)arg1;
- (id)allApplicationsForIconModel:(id)arg1;
- (id)appLibrary;
- (id)applicationPlaceholderWithBundleIdentifier:(id)arg1;
- (id)applicationPlaceholdersForFrontBoardPlaceholders:(id)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationsForApplicationsInfo:(id)arg1;
- (void)dealloc;
- (id)demoteApplicationsObservationToken;
- (id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)removeApplicationsObservationToken;
- (void)removeIconModelApplicationDataSourceObserver:(id)arg1;
- (id)removedPlaceholdersObservationToken;
- (id)replaceApplicationsObservationToken;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)updateApplicationsObservationToken;

@end
