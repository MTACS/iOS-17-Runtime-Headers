
@interface TFFeedbackDataContainer : NSObject <TFFeedbackDataSource, TFFeedbackDataWritable> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _dirtyEntryIdentifiers;
    NSMutableArray * _dirtyGroupIdentifiers;
    NSMutableDictionary * _imageCollectionEntryMap;
    NSMutableSet * _includedGroupIdentifiers;
    NSMutableSet * _loadingEntryIdentifiers;
    NSString * _name;
    NSMutableDictionary * _numberEntryMap;
    <TFFeedbackDataContainerObserver> * _observer;
    NSMutableDictionary * _stringEntryMap;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *dirtyEntryIdentifiers;
@property (nonatomic, readonly) NSMutableArray *dirtyGroupIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *imageCollectionEntryMap;
@property (nonatomic, readonly) NSMutableSet *includedGroupIdentifiers;
@property (nonatomic, readonly) NSMutableSet *loadingEntryIdentifiers;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSMutableDictionary *numberEntryMap;
@property (nonatomic) <TFFeedbackDataContainerObserver> *observer;
@property (nonatomic, readonly) NSMutableDictionary *stringEntryMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearDirtyIdentifiers;
- (void)_markEntryIdentifierDirty:(id)arg1;
- (void)_markGroupIdentifierDirty:(id)arg1;
- (void)_notifyObserverOfUpdates;
- (id)accessQueue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)dirtyEntryIdentifiers;
- (id)dirtyGroupIdentifiers;
- (id)imageCollectionEntryMap;
- (id)imageCollectionForIdentifer:(id)arg1;
- (id)includedGroupIdentifiers;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 includedGroupIdentifiers:(id)arg2 loadingEntryIdentifiers:(id)arg3 stringEntryMap:(id)arg4 numberEntryMap:(id)arg5 imageCollectionEntryMap:(id)arg6 dirtyGroupIdentifiers:(id)arg7 dirtyEntryIdentifiers:(id)arg8;
- (bool)isEntryWithIdentifierLoading:(id)arg1;
- (bool)isGroupWithIdentifierIncluded:(id)arg1;
- (bool)isLoading;
- (id)loadingEntryIdentifiers;
- (id)name;
- (id)numberEntryMap;
- (id)numberForIdentifier:(id)arg1;
- (id)objectForIdentifier:(id)arg1;
- (id)observer;
- (void)overwriteWithContentsOfDataContainer:(id)arg1;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)performBatchUpdates:(id /* block */)arg1 suppressingNotifications:(bool)arg2;
- (void)prepareInitialValuesForForm:(id)arg1;
- (void)setEntryLoadingForIdentifier:(id)arg1 toValue:(bool)arg2;
- (void)setGroupInclusionForIdentifier:(id)arg1 toValue:(bool)arg2;
- (void)setImageCollectionForIdentifier:(id)arg1 toValue:(id)arg2;
- (void)setNumberForIdentifier:(id)arg1 toValue:(id)arg2;
- (void)setObserver:(id)arg1;
- (void)setStringForIdentifier:(id)arg1 toValue:(id)arg2;
- (id)stringEntryMap;
- (id)stringForIdentifier:(id)arg1;

@end
