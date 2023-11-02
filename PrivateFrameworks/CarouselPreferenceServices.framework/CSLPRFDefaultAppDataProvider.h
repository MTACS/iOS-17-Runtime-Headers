
@interface CSLPRFDefaultAppDataProvider : NSObject <CSLPRFAppDataProvider, CSLPRFApplicationLibraryObserving> {
    <CSLPRFApplicationLibrary> * _applicationLibrary;
    <CSLPRFAppDataProviderDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_didLoadApps;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSLPRFAppDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didUpdateApplications:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadAppsWithCompletion:(id /* block */)arg1;
- (void)loadAppsWithCompletion:(id /* block */)arg1 completionQueue:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
