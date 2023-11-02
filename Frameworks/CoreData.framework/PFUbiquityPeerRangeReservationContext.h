
@interface PFUbiquityPeerRangeReservationContext : NSObject {
    NSMutableDictionary * _globalIDToLocalURI;
    NSArray * _globalObjectIDs;
    NSManagedObjectContext * _moc;
    long long  _numRangesToReserve;
    NSMutableDictionary * _peerEntityNameRangeStartSet;
    NSPersistentStoreCoordinator * _psc;
    NSPersistentStore * _store;
    NSMutableDictionary * _storeNameToFetchedMetadata;
    NSMutableArray * _unresolvedGlobalObjectIDs;
}

- (void)dealloc;
- (id)init;
- (id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2;

@end
