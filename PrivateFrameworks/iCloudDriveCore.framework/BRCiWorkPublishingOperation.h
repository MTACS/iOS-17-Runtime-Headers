
@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass> {
    bool  _forPublish;
    BRCItemID * _itemID;
    bool  _readonly;
    NSArray * _recordIDs;
    BRCServerZone * _serverZone;
    NSNumber * _sharingInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateItemAfterShareCompleted;
- (id)createActivity;
- (id)initWithDocumentItem:(id)arg1 forPublish:(bool)arg2 readonly:(bool)arg3;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
