
@interface EMSearchableIndex : NSObject <EFLoggable> {
    EMRemoteConnection * _connection;
}

@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)attachmentPersistentIDFromItemIdentifier:(id)arg1;
+ (id)log;
+ (id)persistentIDForSearchableItem:(id)arg1;
+ (id)remoteInterface;
+ (id)richLinkItemIdentifierFromSearchableItemIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithRemoteConnection:(id)arg1;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;

@end
