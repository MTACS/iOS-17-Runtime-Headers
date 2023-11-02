
@interface KMMapper_INVocabularyItem : NSObject <KMMapper> {
    KVItemBuilder * _builder;
    NSNumber * _intentSlotNameKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_fieldTypeNumberForIntentSlotName:(id)arg1;
+ (Class)externalObjectClass;
+ (long long)fieldTypeForIntentSlotName:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
