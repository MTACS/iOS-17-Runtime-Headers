
@interface CSLPRFCompositeApplicationLibrary : NSObject <CSLPRFApplicationLibrary, CSLPRFApplicationLibraryObserving> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_applications;
    bool  _lock_observing;
    NSMutableDictionary * _lock_primaryApplications;
    NSMutableDictionary * _lock_primaryApplicationsByCounterpart;
    NSMutableDictionary * _lock_secondaryApplications;
    NSMutableDictionary * _lock_secondaryApplicationsByCounterpart;
    CSLPRFObservationHelper * _observationHelper;
    <CSLPRFApplicationLibrary> * _primaryLibrary;
    <CSLPRFApplicationLibrary> * _secondaryLibrary;
}

@property (nonatomic, readonly) NSArray *allApplications;
@property (nonatomic, readonly) NSDictionary *allApplicationsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)allApplications;
- (id)allApplicationsDictionary;
- (void)allApplicationsWithCompletion:(id /* block */)arg1;
- (void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2;
- (void)applicationLibrary:(id)arg1 didUpdateApplications:(id)arg2;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (void)applicationWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithPrimaryLibrary:(id)arg1 secondaryLibrary:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
