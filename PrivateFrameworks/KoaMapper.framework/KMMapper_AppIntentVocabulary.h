
@interface KMMapper_AppIntentVocabulary : NSObject <KMMapper> {
    KVItemBuilder * _builder;
    NSDictionary * _intentSlotToFieldTypeMap;
    NSMutableArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalObjectClass;

- (void).cxx_destruct;
- (bool)_addItemWithItemId:(id)arg1 fieldType:(long long)arg2 values:(id)arg3 error:(id*)arg4;
- (id)_resolveFieldTypeFromIntentSlotName:(id)arg1;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
