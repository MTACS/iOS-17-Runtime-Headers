
@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    CKRecordID * _recordID;
    CKRecordID * _shareID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) CKRecordID *shareID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithItem:(id)arg1;
- (void)main;
- (id)recordID;
- (void)setRecordID:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;

@end
