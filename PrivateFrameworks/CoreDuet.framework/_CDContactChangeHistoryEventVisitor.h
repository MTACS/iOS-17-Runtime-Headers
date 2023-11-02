
@interface _CDContactChangeHistoryEventVisitor : NSObject <CNChangeHistoryEventVisitor> {
    NSMutableArray * _addedContactIdentifiers;
    CNFetchResult * _changeEnumerator;
    NSMutableArray * _deletedContactIdentifiers;
}

@property (nonatomic, readonly) NSArray *addedContactIdentifiers;
@property (nonatomic, readonly) NSData *currentHistoryToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *deletedContactIdentifiers;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addedContactIdentifiers;
- (id)currentHistoryToken;
- (id)deletedContactIdentifiers;
- (id)initWithChangeEnumerator:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitChanges;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
