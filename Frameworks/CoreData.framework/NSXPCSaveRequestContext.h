
@interface NSXPCSaveRequestContext : NSObject {
    NSMutableDictionary * _changeCache;
    NSManagedObjectContext * _context;
    bool  _forceUpdates;
    unsigned long long  _interrupts;
    NSDictionary * _metadata;
    NSSaveChangesRequest * _request;
    NSXPCStore * _store;
}

- (void)dealloc;
- (id)initForStore:(id)arg1 request:(id)arg2 metadata:(id)arg3 forceInsertsToUpdates:(bool)arg4 context:(id)arg5;
- (id)managedObjectContext;

@end
