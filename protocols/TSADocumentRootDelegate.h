
@protocol TSADocumentRootDelegate <TSKAccessControllerDelegate>

@required

- (NSString *)name;

@optional

- (void)continueActivityUsingBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)defaultDraftName;
- (void)didAddObserverForICloudTeardown:(id)arg1;
- (NSString *)documentCachePath;
- (void)invalidateRestorableState;
- (void)willRemoveICloudTeardownObserver:(id)arg1;

@end
