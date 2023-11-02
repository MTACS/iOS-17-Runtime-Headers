
@interface CARNavigationOwnershipManager : NSObject <BSInvalidatable, CRCarPlayNavigationOwnerClient> {
    NSXPCConnection * _connection;
    <CARNavigationOwnershipManagerDelegate> * _delegate;
    NSString * _identifier;
    bool  _ownershipRequested;
    bool  _supportsAccNav;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CARNavigationOwnershipManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSString *lastNavigatingBundleIdentifier;
@property (nonatomic, readonly) unsigned long long owner;
@property (nonatomic) bool ownershipRequested;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAccNav;

- (void).cxx_destruct;
- (void)_handleConnectionReset;
- (void)_setupConnection;
- (id)connection;
- (id)delegate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (id)lastNavigatingBundleIdentifier;
- (void)navigationOwnershipChangedTo:(unsigned long long)arg1;
- (unsigned long long)owner;
- (bool)ownershipRequested;
- (void)releaseNavigationOwnership;
- (void)requestNavigationOwnership;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOwnershipRequested:(bool)arg1;
- (void)setSupportsAccNav:(bool)arg1;
- (bool)supportsAccNav;

@end
