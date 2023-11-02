
@interface AMSLookupResult : AMSURLResult {
    NSDate * _expirationDate;
    NSDictionary * _response;
}

@property (nonatomic, readonly) NSArray *allItems;
@property (nonatomic, copy) NSDate *expirationDate;

- (void).cxx_destruct;
- (void)_enumerateItemsWithBlock:(id /* block */)arg1;
- (id)allItems;
- (id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2;
- (id)expirationDate;
- (id)initWithResult:(id)arg1 dictionary:(id)arg2;
- (id)itemForKey:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
