
@interface ECTransferMessageAction : ECLocalMessageAction <ECTransferMessageActionBuilder> {
    NSURL * _destinationMailboxURL;
    NSMutableOrderedSet * _itemsToCopy;
    NSMutableOrderedSet * _itemsToDelete;
    NSMutableOrderedSet * _itemsToDownload;
    NSURL * _sourceMailboxURL;
    long long  _transferType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *destinationMailboxURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *itemsToCopy;
@property (nonatomic, retain) NSArray *itemsToDelete;
@property (nonatomic, retain) NSArray *itemsToDownload;
@property (nonatomic, retain) NSURL *mailboxURL;
@property (nonatomic, retain) NSString *messageActionPersistentID;
@property (nonatomic, retain) NSURL *sourceMailboxURL;
@property (readonly) Class superclass;
@property (nonatomic) long long transferType;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)description;
- (id)destinationMailboxURL;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)itemsToCopy;
- (id)itemsToDelete;
- (id)itemsToDownload;
- (void)setDestinationMailboxURL:(id)arg1;
- (void)setItemsToCopy:(id)arg1;
- (void)setItemsToDelete:(id)arg1;
- (void)setItemsToDownload:(id)arg1;
- (void)setSourceMailboxURL:(id)arg1;
- (void)setTransferType:(long long)arg1;
- (id)sourceMailboxURL;
- (long long)transferType;
- (void)updateWithCompletedItems:(id)arg1 forPhase:(long long)arg2;
- (void)updateWithFailedItems:(id)arg1 forPhase:(long long)arg2;

@end
