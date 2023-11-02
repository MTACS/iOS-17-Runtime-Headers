
@interface SUUIViewElement : IKViewElement {
    <SUUIEntityProviding> * _entityProvider;
    <IKEntityValueProviding> * _entityValueProvider;
    <IKEntityValueProviding> * _explicitEntityValueProvider;
    NSMutableArray * _flattenedChildren;
    bool  _hasValidEntityProvider;
    long long  _pinGroup;
    long long  _pinStyle;
}

@property (getter=isDynamicContainer, nonatomic, readonly) bool dynamicContainer;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) <SUUIEntityProviding> *entityProvider;
@property (nonatomic, readonly) NSSet *entityValueProperties;
@property (nonatomic, retain) <IKEntityValueProviding> *entityValueProvider;
@property (nonatomic, readonly) <SUUIEntityProviding> *explicitEntityProvider;
@property (nonatomic, retain) <IKEntityValueProviding> *explicitEntityValueProvider;
@property (nonatomic, readonly) NSArray *flattenedChildren;
@property (nonatomic, readonly, copy) NSString *indexBarEntryID;
@property (nonatomic, readonly, retain) NSString *itmlID;
@property (nonatomic, readonly) long long pageComponentType;
@property (nonatomic, readonly) NSSet *personalizationLibraryItems;
@property (nonatomic, readonly) long long pinGroup;
@property (nonatomic, readonly) long long pinStyle;
@property (nonatomic, readonly) bool rendersWithParallax;
@property (nonatomic, readonly) bool rendersWithPerspective;
@property (nonatomic, readonly) <NSCopying> *uniquingMapKey;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_entityValueProviderDidChange;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (id)ancestorElementMatchingPredicate:(id /* block */)arg1;
- (id)ancestorElementOfType:(unsigned long long)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (bool)canMoveWithinCollection;
- (void)dealloc;
- (bool)descendsFromElementWithType:(unsigned long long)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (id)entityProvider;
- (id)entityValueProperties;
- (id)entityValueProvider;
- (void)entityValueProviderDidChange;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (void)enumerateViewElementsWithDictionary:(id)arg1 factory:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)expandableLabelElementForWidth:(double)arg1 context:(id)arg2;
- (id)explicitEntityProvider;
- (id)explicitEntityValueProvider;
- (id)featureWithName:(id)arg1;
- (id)firstChildForElementName:(id)arg1;
- (id)firstChildForElementType:(unsigned long long)arg1;
- (id)firstDescendentWithIndexBarEntryID:(id)arg1;
- (id)flattenedChildren;
- (bool)handlesBackgroundColorDirectly;
- (id)indexBarEntryID;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isDescendentFromViewElement:(id)arg1;
- (bool)isDynamicContainer;
- (bool)isEnabled;
- (long long)pageComponentType;
- (id)persistenceKey;
- (id)personalizationLibraryItems;
- (long long)pinGroup;
- (long long)pinStyle;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (void)setEntityValueProvider:(id)arg1;
- (void)setExplicitEntityValueProvider:(id)arg1;
- (id)uniquingMapKey;

@end