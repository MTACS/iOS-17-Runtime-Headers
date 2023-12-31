
@interface _UIDocumentPickerRootContainerModel : _UIDocumentPickerURLContainerModel {
    bool  _isObservingContainers;
}

- (id)_containerListDidChange;
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (void)startMonitoringChanges;

@end
