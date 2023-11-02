
@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver> {
    NSMutableDictionary * _changeObserversByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changeObserversByIdentifierLock;
    EDMailboxProvider * _mailboxProvider;
}

@property (nonatomic, readonly) NSSet *allMailboxObjectIDs;
@property (nonatomic, retain) NSMutableDictionary *changeObserversByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EDMailboxProvider *mailboxProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addChangeObserver:(id)arg1 withIdentifier:(id)arg2;
- (id)allMailboxObjectIDs;
- (id)allMailboxes;
- (void)allMailboxesWithCompletionHandler:(id /* block */)arg1;
- (id)changeObserversByIdentifier;
- (bool)createMailbox:(id)arg1 parentMailboxID:(id)arg2;
- (bool)deleteMailbox:(id)arg1;
- (void)fetchMailboxLists;
- (id)initWithMailboxProvider:(id)arg1;
- (id)legacyMailboxForMailboxURL:(id)arg1;
- (id)legacyMailboxForObjectID:(id)arg1;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(bool)arg2;
- (void)mailboxListInvalidated;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (id)mailboxProvider;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (bool)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2;
- (void)removeChangeObserverWithIdentifier:(id)arg1;
- (bool)renameMailbox:(id)arg1 newName:(id)arg2;
- (void)serverCountsForMailboxScope:(id)arg1 block:(id /* block */)arg2;
- (void)setChangeObserversByIdentifier:(id)arg1;
- (void)setMailboxProvider:(id)arg1;
- (void)test_tearDown;
- (id)userCreatedMailboxObjectIDs;

@end
