
@interface BKHIDEventDeliveryObserverService : NSObject <BKHIDDomainServiceDelegate, BKHIDEventDeliveryResolutionObserver, BKSHIDEventObserverServerInterface> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableIndexSet * _observerPIDs;
    BSMutableIntegerMap * _resolutionsByPID;
    BKHIDDomainServiceServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)resolutionsDidChange:(id)arg1 forPID:(int)arg2;
- (id)setObservesDeferringResolutions:(id)arg1;

@end
