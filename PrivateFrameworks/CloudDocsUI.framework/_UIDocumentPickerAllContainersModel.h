
@interface _UIDocumentPickerAllContainersModel : _UIDocumentPickerURLContainerModel {
    NSArray * _scopes;
    BRContainer * _sourceContainer;
}

- (void).cxx_destruct;
- (id)_createObserver;
- (id)displayTitle;
- (id)initWithFoldersForPickableTypes:(id)arg1 mode:(unsigned long long)arg2 sourceContainer:(id)arg3;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)scopes;
- (bool)shouldShowTopLevelContainers;
- (void)startMonitoringChanges;
- (void)updateScopes;

@end
