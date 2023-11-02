
@interface SKStateTransitionTable : NSObject {
    NSMutableDictionary * _entriesMap;
    id  _selectorTarget;
}

@property (nonatomic, retain) NSMutableDictionary *entriesMap;
@property (nonatomic, retain) id selectorTarget;

+ (id)tableWithTransitionEntries:(id)arg1;
+ (id)tableWithTransitionEntries:(id)arg1 selectorTarget:(id)arg2;

- (void).cxx_destruct;
- (id)entriesMap;
- (id)entryForState:(id)arg1 event:(id)arg2;
- (id)selectorTarget;
- (void)setEntriesMap:(id)arg1;
- (void)setSelectorTarget:(id)arg1;

@end
