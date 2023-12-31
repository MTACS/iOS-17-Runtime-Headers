
@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel {
    NSString * _containerID;
}

- (void).cxx_destruct;
- (id)_createObserver;
- (id)displayTitle;
- (id)initWithPickableTypes:(id)arg1 container:(id)arg2;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)scopes;
- (bool)shouldShowTopLevelContainers;
- (void)startMonitoringChanges;

@end
