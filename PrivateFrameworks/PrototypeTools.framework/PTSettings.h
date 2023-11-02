
@interface PTSettings : NSObject <NSCopying, PTSettingsKeyPathObserver> {
    PTSettingsClassStructure * __classStructure;
    bool  __isObservingChildren;
    bool  __isObservingProperties;
    NSHashTable * __keyObservers;
    NSHashTable * __keyPathObservers;
    bool  __observationEnabled;
    <_PTSettingsRestoreDefaultsObserver> * __restoreDefaultsObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 toArchive:(id)arg3;
+ (id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2;
+ (id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2;
+ (id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2;
+ (bool)_supportsArchivingCustomClass:(Class)arg1;
+ (bool)_supportsArchivingStructType:(id)arg1;
+ (id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2;
+ (id)emptyArchiveForSettingsClassName:(id)arg1;
+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;
+ (id)settingsFromArchiveDictionary:(id)arg1;
+ (unsigned long long)settingsVersionNumber;

- (void).cxx_destruct;
- (id)_allChildAndLeafKeys;
- (id)_allKeys;
- (void)_applyArchiveDictionary:(id)arg1;
- (bool)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (bool)_applyArchiveValue:(id)arg1 forLeafKey:(id)arg2 error:(id*)arg3;
- (id)_archiveValueForKeyPath:(id)arg1;
- (id)_archiveValueForLeafKey:(id)arg1;
- (id)_createChildForKey:(id)arg1;
- (void)_createChildren;
- (void)_createChildrenAndOutlets;
- (void)_createOutlets;
- (id)_ensureChildForKey:(id)arg1;
- (void)_enumerateChildrenWithBlock:(id /* block */)arg1;
- (void)_enumerateLeafValuesWithBlock:(id /* block */)arg1;
- (void)_enumerateOutletsWithBlock:(id /* block */)arg1;
- (bool)_getChild:(id*)arg1 create:(bool)arg2 leafKey:(id*)arg3 forKeyPath:(id)arg4 error:(id*)arg5;
- (bool)_hasKeyPathObservers;
- (bool)_hasObservers;
- (id)_initWithArchiveDictionary:(id)arg1;
- (id)_initWithClassStructure:(id)arg1;
- (id)_keyForChild:(id)arg1;
- (void)_safeSetValue:(id)arg1 forLeafKey:(id)arg2;
- (void)_sendDidRestoreDefaults;
- (void)_sendKeyChanged:(id)arg1;
- (void)_sendKeyPathChanged:(id)arg1;
- (void)_sendWillRestoreDefaults;
- (void)_setObservationEnabled:(bool)arg1;
- (void)_setRestoreDefaultsObserver:(id)arg1;
- (void)_startObservingChildren;
- (void)_startObservingProperties;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_stopObservingChildren;
- (void)_stopObservingProperties;
- (void)_validateChildren;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)applySettings:(id)arg1;
- (id)archiveDictionary;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createChildren;
- (void)dealloc;
- (id)drillDownSummary;
- (id)init;
- (id)initWithDefaultValues;
- (void)invalidateValueForKey:(id)arg1;
- (id)module;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)setDefaultValues;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (bool)suppressesIntrospectionOnCustomerInstalls;

@end
