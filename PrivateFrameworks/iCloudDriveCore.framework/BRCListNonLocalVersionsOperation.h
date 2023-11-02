
@interface BRCListNonLocalVersionsOperation : _BRCOperation <BRCOperationSubclass> {
    BRCLocalVersion * _currentVersion;
    BRCLocalItem * _item;
    BRCNotification * _notification;
    CKRecordID * _recordID;
    BRCServerZone * _serverZone;
    CKRecordID * _shareID;
}

@property (nonatomic, retain) BRCLocalVersion *currentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BRCLocalItem *item;
@property (nonatomic, retain) BRCNotification *notification;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) BRCServerZone *serverZone;
@property (nonatomic, retain) CKRecordID *shareID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)currentVersion;
- (id)initWithDocumentItem:(id)arg1;
- (id)item;
- (void)main;
- (id)notification;
- (id)recordID;
- (id)serverZone;
- (void)setCurrentVersion:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setServerZone:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;

@end
