
@interface BRShareOperation : BROperation {
    NSString * _itemID;
    <BRShareOperationProtocol><NSXPCProxyCreating> * _remoteObject;
    NSObject<OS_dispatch_group> * _serviceGroup;
    NSFileProviderService * _sharingService;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *itemID;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)directConnectionFPFSObject;
- (id)init;
- (id)initWithDirectConnection;
- (id)initWithItemIdentifier:(id)arg1;
- (id)initWithShare:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)itemID;
- (id)remoteFPFSObject;
- (id)remoteLegacyObject;
- (id)remoteObject;
- (void)setItemID:(id)arg1;
- (void)setUrl:(id)arg1;
- (bool)shouldUseDirectConnection;
- (id)url;

@end
