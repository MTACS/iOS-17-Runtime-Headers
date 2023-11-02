
@interface KMMapper_SASyncSiriKitAppVocabulary : NSObject <KMMapper> {
    KVItemBuilder * _builder;
    NSDictionary * _ontologyNodeToFieldTypeMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalObjectClass;

- (void).cxx_destruct;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
