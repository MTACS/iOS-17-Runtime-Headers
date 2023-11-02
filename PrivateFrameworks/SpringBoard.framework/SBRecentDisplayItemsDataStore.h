
@interface SBRecentDisplayItemsDataStore : NSObject {
    <SBRecentDisplayItemsPersistenceDelegate> * _persistenceDelegate;
    NSArray * _recentLayouts;
    bool  _shouldFallbackToRecentAppLayouts;
}

@property (nonatomic, copy) NSOrderedSet *displayItems;
@property (nonatomic) <SBRecentDisplayItemsPersistenceDelegate> *persistenceDelegate;

- (void).cxx_destruct;
- (id)_displayItemsFromRecentAppLayouts:(id)arg1;
- (id)displayItems;
- (id)init;
- (id)initWithRecentLayouts:(id)arg1 fallbackToRecentAppLayouts:(bool)arg2;
- (id)persistenceDelegate;
- (void)setDisplayItems:(id)arg1;
- (void)setPersistenceDelegate:(id)arg1;

@end
