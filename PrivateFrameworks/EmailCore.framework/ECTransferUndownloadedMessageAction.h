
@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction <ECTransferUndownloadedMessageActionBuilder> {
    NSURL * _destinationMailboxURL;
    NSArray * _itemsToDelete;
    NSString * _oldestPersistedRemoteID;
    NSURL * _sourceMailboxURL;
    long long  _transferType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *destinationMailboxURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *itemsToDelete;
@property (nonatomic, retain) NSURL *mailboxURL;
@property (nonatomic, retain) NSString *messageActionPersistentID;
@property (nonatomic, copy) NSString *oldestPersistedRemoteID;
@property (nonatomic, retain) NSURL *sourceMailboxURL;
@property (readonly) Class superclass;
@property (nonatomic) long long transferType;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)description;
- (id)destinationMailboxURL;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)itemsToDelete;
- (id)oldestPersistedRemoteID;
- (void)setDestinationMailboxURL:(id)arg1;
- (void)setItemsToDelete:(id)arg1;
- (void)setOldestPersistedRemoteID:(id)arg1;
- (void)setSourceMailboxURL:(id)arg1;
- (void)setTransferType:(long long)arg1;
- (id)sourceMailboxURL;
- (long long)transferType;
- (void)updateWithCompletedCopyItems:(id)arg1;

@end
