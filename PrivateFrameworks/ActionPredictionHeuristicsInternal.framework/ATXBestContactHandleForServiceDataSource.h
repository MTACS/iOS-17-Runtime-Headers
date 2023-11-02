
@interface ATXBestContactHandleForServiceDataSource : NSObject <IDSIDQueryControllerDelegate> {
    ATXHeuristicDevice * _device;
    _PASLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getBestGuessFromRankedHandle:(id)arg1 forService:(id)arg2;
- (void)allHandlesForContact:(id)arg1 callback:(id /* block */)arg2;
- (void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(id /* block */)arg3;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end
