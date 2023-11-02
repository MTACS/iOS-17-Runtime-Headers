
@interface _FPFilePresenterObserver : NSObject <FPFilePresenterObserver> {
    NSFileProviderManager * _parentConnection;
}

@property NSFileProviderManager *parentConnection;

- (void).cxx_destruct;
- (void)observePresentedFilesDidChange:(id)arg1;
- (id)parentConnection;
- (void)setParentConnection:(id)arg1;

@end
