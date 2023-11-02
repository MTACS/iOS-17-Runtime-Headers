
@interface IMDContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor> {
    NSMutableDictionary * _CNIDToAliasesMap;
    NSMutableDictionary * _aliasToCNIDMap;
    bool  _receivedDropEverythingEvent;
}

@property (nonatomic, retain) NSMutableDictionary *CNIDToAliasesMap;
@property (nonatomic, retain) NSMutableDictionary *aliasToCNIDMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool receivedDropEverythingEvent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CNIDToAliasesMap;
- (void)addAliasToCNIDToAliasMap:(id)arg1 withCNID:(id)arg2;
- (id)aliasToCNIDMap;
- (id)generateCNIDToAliasesMapFrom:(id)arg1;
- (id)getAliasToCNIDMap;
- (id)getCNIDToAliasesMap;
- (void)handleAddOrUpdateEventForCNContact:(id)arg1;
- (id)initWithAliasToCNIDMap:(id)arg1;
- (id)matchAliasesFromCacheForCNContact:(id)arg1;
- (bool)receivedDropEverythingEvent;
- (void)removeAliasFromCNIDToAliasesMap:(id)arg1 withCNID:(id)arg2;
- (void)setAliasToCNIDMap:(id)arg1;
- (void)setCNIDToAliasesMap:(id)arg1;
- (void)setReceivedDropEverythingEvent:(bool)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
