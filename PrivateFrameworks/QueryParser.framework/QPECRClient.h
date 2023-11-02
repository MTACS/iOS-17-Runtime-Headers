
@interface QPECRClient : NSObject <QPECRClient> {
    <GDVisualIdentifierView> * _view;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _viewLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)clearVisualIdentifierView;
- (bool)coolDownECRClientSyncWithError:(id*)arg1;
- (void)cooldownAsync;
- (void)cooldownSync;
- (id)init;
- (id)resolveEntitiesWithRequest:(id)arg1 error:(id*)arg2;
- (id)visualIdentifierViewWithError:(id*)arg1;
- (id)visualIdentifiersWithText:(id)arg1 allowPrefixSearch:(bool)arg2 error:(id*)arg3;
- (void)warmUpAsync;
- (bool)warmUpECRClientSyncWithError:(id*)arg1;
- (void)warmUpSync;

@end
