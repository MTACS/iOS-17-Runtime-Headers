
@interface CXServiceClient : NSObject {
    long long  _backgroundModeOptions;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    BSServiceConnection<BSServiceConnectionHost> * _connection;
    <CXServiceClientDelegate> * _delegate;
    NSString * _identifier;
    NSString * _localizedName;
    bool  _permittedToUsePrivateAPI;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) long long backgroundModeOptions;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) <CXServiceClientDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isPermittedToUseBluetoothAccessories, nonatomic, readonly) bool permittedToUseBluetoothAccessories;
@property (getter=isPermittedToUsePrivateAPI, nonatomic, readonly) bool permittedToUsePrivateAPI;
@property (getter=isPermittedToUsePublicAPI, nonatomic, readonly) bool permittedToUsePublicAPI;
@property (nonatomic, readonly) int processIdentifier;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (long long)backgroundModeOptions;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)connection;
- (id)delegate;
- (id)description;
- (id)identifier;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isConnected;
- (bool)isPermittedToUseBluetoothAccessories;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (id)localizedName;
- (int)processIdentifier;
- (void)setDelegate:(id)arg1;

@end
