
@interface IMMomentShareCache : NSObject <PHPhotoLibraryChangeObserver> {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _completionHandlers;
    bool  _hasRegisteredForLibraryChanges;
    NSObject<OS_dispatch_queue> * _libraryRegistrationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_ensureLibraryRegistration;
- (id)_momentShareForURLString:(id)arg1 error:(id*)arg2;
- (void)_processFetchedMomentShare:(id)arg1 forURLString:(id)arg2 error:(id)arg3 completionHandlers:(id)arg4;
- (id)init;
- (void)momentShareForURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)momentShareForURLString:(id)arg1 error:(id*)arg2;
- (void)photoLibraryDidChange:(id)arg1;

@end
