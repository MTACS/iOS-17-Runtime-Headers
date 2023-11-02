
@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCAppLibrary * _appLibrary;
    unsigned long long  _chainedRecordsCount;
    BRCServerItem * _serverItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCItemID *rootItemID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performPCSChainBatch;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (void)main;
- (id)rootItemID;

@end
