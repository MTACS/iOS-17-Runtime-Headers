
@interface KMMapper_CNContact : NSObject <KMMapper> {
    NSNumber * _alternativeItemIdKey;
    KVItemBuilder * _builder;
    NSNumber * _meCardIdentifierKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalObjectClass;

- (void).cxx_destruct;
- (bool)_addLabeledFieldsOfType:(long long)arg1 labeledValues:(id)arg2 labelOnly:(bool)arg3 error:(id*)arg4;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
