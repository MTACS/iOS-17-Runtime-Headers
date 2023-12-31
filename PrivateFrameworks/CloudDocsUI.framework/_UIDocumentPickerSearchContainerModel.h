
@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel {
    NSString * _queryString;
}

@property (nonatomic, copy) NSString *queryString;

- (void).cxx_destruct;
- (id)_createObserver;
- (void)_updateObserverForQuery;
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;
- (id)displayTitle;
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)queryString;
- (id)scopes;
- (void)setQueryString:(id)arg1;
- (bool)shouldShowTopLevelContainers;
- (void)startMonitoringChanges;

@end
