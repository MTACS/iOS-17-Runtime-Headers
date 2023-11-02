
@interface SGSGtoCNContactsCacheUpdateAdapter : NSObject <SGJournalContactsObserver> {
    SGSqlEntityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SGSqlEntityStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (void)rejectContact:(id)arg1;
- (void)removeAllStoredPseudoContacts;
- (void)setStore:(id)arg1;
- (id)store;

@end
