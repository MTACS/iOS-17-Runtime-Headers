
@interface IKDSEBoundItemsImpl : NSObject <IKDataSourceElementImplementing> {
    NSDictionary * _childrenByItemID;
    IKAppDataSet * _dataSet;
    IKDataSourceElement * _dataSourceElement;
    IKChangeSet * _itemsChangeSet;
    _IKDSEPrototypeBundle * _prototypeBundle;
    NSMutableDictionary * _proxiedItemElementsByItemID;
    NSDictionary * _usedPrototypeMappingsByIdentifier;
    bool  _visibleIndexRangeIsDirty;
    NSMutableIndexSet * _visibleIndexSet;
}

@property (nonatomic, copy) NSDictionary *childrenByItemID;
@property (nonatomic, retain) IKAppDataSet *dataSet;
@property (nonatomic, readonly) IKDataSourceElement *dataSourceElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *indexTitles;
@property (nonatomic, retain) IKChangeSet *itemsChangeSet;
@property (nonatomic, readonly) NSArray *masterPrototypes;
@property (nonatomic, retain) _IKDSEPrototypeBundle *prototypeBundle;
@property (nonatomic, readonly) NSArray *prototypes;
@property (nonatomic, readonly, copy) NSArray *proxiedItemElements;
@property (nonatomic, retain) NSMutableDictionary *proxiedItemElementsByItemID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *usedPrototypeMappingsByIdentifier;
@property (nonatomic, retain) NSMutableIndexSet *visibleIndexSet;

+ (bool)_canProxiedItemElementsBeUpdatedWithLoadedElements;

- (void).cxx_destruct;
- (void)_appendVisibleIndexSetWithIndex:(long long)arg1;
- (id)_elementForItemAtIndex:(long long)arg1;
- (void)_initializePrototypeBundleIfNeeded;
- (id)_prototypeMappingForItemAtIndex:(long long)arg1;
- (void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(id /* block */)arg2;
- (bool)canProxyUnloadedChildElement:(id)arg1;
- (id)childrenByItemID;
- (void)configureUpdatesWithImplementation:(id)arg1;
- (id)dataSet;
- (id)dataSourceElement;
- (id)debugDescription;
- (id)elementForItemAtIndex:(long long)arg1;
- (long long)indexOfItemForElement:(id)arg1;
- (id)indexTitles;
- (id)initWithDataSourceElement:(id)arg1;
- (void)initializeWithElementFactory:(id)arg1;
- (id)itemsChangeSet;
- (void)loadIndex:(long long)arg1;
- (id)masterPrototypeForItemAtIndex:(unsigned long long)arg1;
- (id)masterPrototypes;
- (long long)numberOfItems;
- (id)prototypeBundle;
- (id)prototypeForItemAtIndex:(long long)arg1;
- (id)prototypes;
- (id)proxiedItemElements;
- (id)proxiedItemElementsByItemID;
- (id)proxyElementForLoadedChildElement:(id)arg1;
- (void)resetImplicitUpdates;
- (void)resetUpdates;
- (void)setChildrenByItemID:(id)arg1;
- (void)setDataSet:(id)arg1;
- (void)setItemsChangeSet:(id)arg1;
- (void)setPrototypeBundle:(id)arg1;
- (void)setProxiedItemElementsByItemID:(id)arg1;
- (void)setUsedPrototypeMappingsByIdentifier:(id)arg1;
- (void)setVisibleIndexSet:(id)arg1;
- (void)teardown;
- (void)unloadIndex:(long long)arg1;
- (void)updateStylesUsingUpdater:(id /* block */)arg1;
- (id)usedPrototypeMappingsByIdentifier;
- (id)visibleIndexSet;

@end
