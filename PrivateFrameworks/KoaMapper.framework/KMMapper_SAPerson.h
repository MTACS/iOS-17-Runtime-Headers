
@interface KMMapper_SAPerson : NSObject <KMMapper> {
    KVItemBuilder * _builder;
    NSNumber * _sharedUserIdKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)externalObjectClass;

- (void).cxx_destruct;
- (bool)_addLabeledFieldsForEmails:(id)arg1 error:(id*)arg2;
- (bool)_addLabeledFieldsForPhones:(id)arg1 error:(id*)arg2;
- (bool)_addLabeledFieldsForPostalAddresses:(id)arg1 error:(id*)arg2;
- (bool)_addLabeledFieldsForRelatedNames:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
