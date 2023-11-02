
@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    ACDAccessPluginManager * _accessPluginManager;
    ACDAccountNotifier * _accountNotifier;
    NSMutableArray * _accountStoreClients;
    NSXPCListener * _accountStoreListener;
    NSXPCListener * _authenticationDialogListener;
    ACDAuthenticationDialogManager * _authenticationDialogManager;
    NSMutableArray * _authenticationDialogManagerClients;
    ACDAuthenticationPluginManager * _authenticationPluginManager;
    unsigned int  _clientCountMaximum;
    <ACDClientProviderProtocol> * _clientProvider;
    NSMutableDictionary * _clientsByConnection;
    <ACDDatabaseProtocol> * _database;
    ACDDatabaseBackupActivity * _databaseBackupActivity;
    ACDDataclassOwnersManager * _dataclassOwnersManager;
    NSMutableArray * _oauthSignerClients;
    NSXPCListener * _oauthSignerListener;
    NSObject<OS_dispatch_queue> * _performMigrationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertyLock;
    ACRemoteDeviceProxy * _remoteDeviceProxy;
}

@property (nonatomic, retain) ACDAccessPluginManager *accessPluginManager;
@property (nonatomic, retain) ACDAccountNotifier *accountNotifier;
@property (nonatomic, readonly) NSXPCListener *accountStoreListener;
@property (nonatomic, readonly) NSXPCListener *authenticationDialogListener;
@property (nonatomic, retain) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (nonatomic, retain) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (nonatomic, retain) <ACDClientProviderProtocol> *clientProvider;
@property (nonatomic, retain) <ACDDatabaseProtocol> *database;
@property (nonatomic, retain) ACDDatabaseBackupActivity *databaseBackupActivity;
@property (nonatomic, retain) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *oauthSignerListener;
@property (nonatomic, retain) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginObservingIDSProxyNotifications;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_endObservingLanguageChangeNotification;
- (void)_handleLanguageChangedDarwinNotification;
- (id)_keyForConnection:(id)arg1;
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;
- (id)_newOAuthSignerForClient:(id)arg1;
- (void)_notify_accountStore:(id)arg1 didSaveAccount:(id)arg2 changeType:(int)arg3;
- (bool)_shouldNotifyClient:(id)arg1 ofChangesForAccountType:(id)arg2;
- (bool)_shouldSendDidSaveNotificationForAccount:(id)arg1;
- (id)accessPluginManager;
- (id)accountNotifier;
- (void)accountStore:(id)arg1 didSaveAccount:(id)arg2 changeType:(int)arg3;
- (id)accountStoreListener;
- (id)authenticationDialogListener;
- (id)authenticationDialogManager;
- (id)authenticationPluginManager;
- (id)clientForConnection:(id)arg1;
- (id)clientProvider;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)createClientForConnection:(id)arg1;
- (id)createDatabaseConnection;
- (void)credentialsDidChangeForAccount:(id)arg1;
- (id)database;
- (id)databaseBackupActivity;
- (id)dataclassOwnersManager;
- (void)dealloc;
- (id)init;
- (id)initWithAccountStoreListener:(id)arg1 oauthSignerListener:(id)arg2 authenticationDialogListener:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)oauthSignerListener;
- (id)remoteDeviceProxy;
- (void)setAccessPluginManager:(id)arg1;
- (void)setAccountNotifier:(id)arg1;
- (void)setAuthenticationDialogManager:(id)arg1;
- (void)setAuthenticationPluginManager:(id)arg1;
- (void)setClientProvider:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDatabaseBackupActivity:(id)arg1;
- (void)setDataclassOwnersManager:(id)arg1;
- (void)setRemoteDeviceProxy:(id)arg1;
- (void)shutdown;
- (void)start;

@end
