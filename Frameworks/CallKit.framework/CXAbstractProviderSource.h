
@interface CXAbstractProviderSource : NSObject <CXAbstractProviderHostProtocol, CXAbstractProviderVendorProtocol> {
    bool  _connected;
    <CXAbstractProviderSourceDelegate> * _delegate;
    NSString * _identifier;
    <CXAbstractProviderSourceDelegateInternal> * _internalDelegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (getter=isConnected, nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXAbstractProviderSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) <CXAbstractProviderSourceDelegateInternal> *internalDelegate;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isPermittedToUseBluetoothAccessories, nonatomic, readonly) bool permittedToUseBluetoothAccessories;
@property (getter=isPermittedToUsePrivateAPI, nonatomic, readonly) bool permittedToUsePrivateAPI;
@property (getter=isPermittedToUsePublicAPI, nonatomic, readonly) bool permittedToUsePublicAPI;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CXAbstractProviderVendorProtocol> *vendorProtocolDelegate;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1 completionHandler:(id /* block */)arg2;
- (struct { unsigned int x1[8]; })auditToken;
- (void)beginWithCompletionHandler:(id /* block */)arg1;
- (id)bundleIdentifier;
- (id)bundleURL;
- (oneway void)commitTransaction:(id)arg1;
- (id)delegate;
- (id)description;
- (oneway void)handleActionTimeout:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)internalDelegate;
- (bool)isConnected;
- (bool)isPermittedToUseBluetoothAccessories;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (id)localizedName;
- (int)processIdentifier;
- (id)queue;
- (oneway void)requestTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)vendorProtocolDelegate;

@end
