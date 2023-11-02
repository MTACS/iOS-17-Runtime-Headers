
@interface EMVIPManager : NSObject <EFFutureDelegate, EFLoggable, EMVIPManager, EMVIPManagerObserver, EMVIPReader_Private> {
    EAEmailAddressSet * _cachedEmailAddresses;
    EMRemoteConnection * _connection;
    EMRemoteConnectionRecoveryAssertion * _connectionRecoveryAssertion;
    EFCancelationToken * _observerCancelationToken;
    EFPromise * _vipsByIdentifierPromise;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _vipsLock;
}

@property (nonatomic, readonly, copy) EAEmailAddressSet *allVIPEmailAddresses;
@property (nonatomic, readonly, copy) NSSet *allVIPWaitForResult;
@property (nonatomic, readonly, copy) NSSet *allVIPs;
@property (nonatomic, retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasVIPs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) EFPromise *vipsByIdentifierPromise;

+ (id)log;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)_reset;
- (void)_startObservingVIPChangesIfNecessary;
- (id)_vipsByIdentifier;
- (id)_vipsByIdentifierFuture;
- (id)allVIPEmailAddresses;
- (id)allVIPWaitForResult;
- (id)allVIPs;
- (id)connection;
- (void)dealloc;
- (void)didFinishBlockingMainThreadForFuture:(id)arg1;
- (void)didStartBlockingMainThreadForFuture:(id)arg1;
- (void)getAllVIPsWithCompletion:(id /* block */)arg1;
- (bool)hasVIPs;
- (id)init;
- (id)initWithRemoteConnection:(id)arg1;
- (bool)isVIPAddress:(id)arg1;
- (void)observer:(id)arg1 gotVIPs:(id)arg2;
- (void)observer:(id)arg1 updatedVIPs:(id)arg2 removedVIPs:(id)arg3;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setVipsByIdentifierPromise:(id)arg1;
- (id)vipWithIdentifier:(id)arg1;
- (id)vipsByIdentifierPromise;

@end
