
@interface _PHDictionaryKeyValueWrapper : NSObject {
    NSDictionary * _dictionary;
    NSDictionary * _fetchedPropertyNamesByEntityName;
    NSMutableSet * _missingPropertyNames;
    NSManagedObjectID * _objectID;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSSet *missingPropertyNames;
@property (nonatomic, readonly) NSManagedObjectID *objectID;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)initWithFetchedPropertyNamesByEntityName:(id)arg1;
- (id)missingPropertyNames;
- (id)objectID;
- (void)setObjectID:(id)arg1 dictionary:(id)arg2;
- (id)valueForKey:(id)arg1;

@end
