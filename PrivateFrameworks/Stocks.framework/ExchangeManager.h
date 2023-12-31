
@interface ExchangeManager : NSObject {
    NSMutableDictionary * _exchangesByName;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addExchange:(id)arg1;
- (void)_loadExchangesFromDefaults;
- (void)addExchange:(id)arg1;
- (bool)containsExchange:(id)arg1;
- (id)exchangeList;
- (id)exchangeWithName:(id)arg1;
- (id)exchangeWithName:(id)arg1 createIfNotFound:(bool)arg2;
- (id)init;
- (void)reloadExchangesFromDefaults;
- (void)removeExchange:(id)arg1;
- (void)saveChanges;

@end
