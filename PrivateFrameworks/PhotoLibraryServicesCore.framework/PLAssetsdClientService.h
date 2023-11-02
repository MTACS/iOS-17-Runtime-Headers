
@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol> {
    NSMutableArray * _libraryUnavailabilityHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)arg1;
- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(bool)arg3 data:(id)arg4 error:(id)arg5;
- (void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2;

@end
