
@interface KMMapper_HMHome : NSObject <KMMapper> {
    KVItemBuilder * _builder;
    NSMutableArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalObjectClass;

- (void).cxx_destruct;
- (bool)_addItemWithItemId:(id)arg1 assistantHomeKitId:(id)arg2 fieldType:(long long)arg3 name:(id)arg4 error:(id*)arg5;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
