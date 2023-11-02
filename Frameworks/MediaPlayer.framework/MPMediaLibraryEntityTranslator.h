
@interface MPMediaLibraryEntityTranslator : NSObject {
    Class  _MPModelClass;
    id /* block */  _allowedItemPredicatesBlock;
    void * _entityClass;
    id /* block */  _entityQueryBlock;
    NSMutableDictionary * _propertiesToTranslators;
    NSMutableDictionary * _relationshipsToTranslators;
    bool  _transient;
}

@property (nonatomic, readonly) Class MPModelClass;
@property (nonatomic, copy) id /* block */ allowedItemPredicatesBlock;
@property (nonatomic, readonly) void*entityClass;
@property (nonatomic, copy) id /* block */ entityQueryBlock;
@property (getter=isTransient, nonatomic, readonly) bool transient;

+ (id)_translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(void*)arg2 create:(bool)arg3 transient:(bool)arg4;
+ (id)translatorForMPModelClass:(Class)arg1;
+ (id)translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(void*)arg2;
+ (id)translatorForTransientMPModelClass:(Class)arg1;

- (void).cxx_destruct;
- (struct vector<std::shared_ptr<mlcore::Predicate>, std::allocator<std::shared_ptr<mlcore::Predicate>>> { void *x1; void *x2; struct __compressed_pair<std::shared_ptr<mlcore::Predicate> *, std::allocator<std::shared_ptr<mlcore::Predicate>>> { void *x_3_1_1; } x3; })MLCorePredicateForModelPropertyFilters:(id)arg1;
- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase {} **x1; struct ModelPropertyBase {} **x2; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase {} **x_3_1_1; } x3; })MLCorePropertiesForPropertySet:(id)arg1;
- (struct vector<mlcore::SortDescriptor, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor {} *x1; struct SortDescriptor {} *x2; struct __compressed_pair<mlcore::SortDescriptor *, std::allocator<mlcore::SortDescriptor>> { struct SortDescriptor {} *x_3_1_1; } x3; })MLCoreSortDescriptorsForModelSortDescriptors:(id)arg1;
- (Class)MPModelClass;
- (struct vector<mlcore::ModelPropertyBase *, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase {} **x1; struct ModelPropertyBase {} **x2; struct __compressed_pair<mlcore::ModelPropertyBase **, std::allocator<mlcore::ModelPropertyBase *>> { struct ModelPropertyBase {} **x_3_1_1; } x3; })_MLCorePropertiesForPropertySet:(id)arg1 withForeignPropertyBase:(void*)arg2;
- (id)_objectForPropertySet:(id)arg1 entityClass:(void*)arg2 propertyCache:(const void*)arg3 baseTranslator:(id)arg4 prependKeyPath:(id)arg5 context:(id)arg6;
- (void*)_propertyForKeyPath:(id)arg1;
- (struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x1; struct __shared_weak_count {} *x2; })_propertyMapForKeyPath:(id)arg1 includePropertiesToSort:(bool)arg2;
- (id)_propertyTranslatorForKeyPath:(id)arg1;
- (id)_valueForKeyPath:(id)arg1 forPropertyCache:(const void*)arg2 context:(id)arg3;
- (id /* block */)allowedItemPredicatesBlock;
- (Class)classForRelationshipKey:(id)arg1;
- (void*)entityClass;
- (id /* block */)entityQueryBlock;
- (struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery {} *x1; struct __shared_weak_count {} *x2; })entityQueryForPropertySet:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3 view:(id)arg4;
- (id)identifiersForPropertyCache:(const void*)arg1 context:(id)arg2;
- (bool)isTransient;
- (void)mapIdentifierMLProperties:(const void*)arg1 identifierCreationBlock:(id /* block */)arg2;
- (void)mapPropertyKey:(id)arg1 toMLProperty:(void*)arg2;
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void*)arg2 propertiesToSort:(const void*)arg3 sortTransformer:(id /* block */)arg4 filterTransformer:(id /* block */)arg5 valueTransformer:(id /* block */)arg6;
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void*)arg2 propertiesToSort:(const void*)arg3 sortTransformer:(id /* block */)arg4 valueTransformer:(id /* block */)arg5;
- (void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const void*)arg2 valueTransformer:(id /* block */)arg3;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(bool)arg3 usingForeignPropertyBase:(void*)arg4;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(bool)arg3 usingForeignPropertyBase:(void*)arg4 relationshipValidationProperties:(const void*)arg5 isValidRelationshipHandler:(id /* block */)arg6;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 usingForeignPropertyBase:(void*)arg3;
- (id)objectForPropertySet:(id)arg1 entityClass:(void*)arg2 propertyCache:(const void*)arg3 context:(id)arg4;
- (struct shared_ptr<mlcore::PropertiesQuery> { struct PropertiesQuery {} *x1; struct __shared_weak_count {} *x2; })propertiesQueryForPropertySet:(id)arg1 scopedContainers:(id)arg2 allowedItemIdentifiers:(id)arg3 view:(id)arg4;
- (struct unordered_map<std::string, mlcore::ModelPropertyBase *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, mlcore::ModelPropertyBase *>>> { struct __hash_table<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, mlcore::ModelPropertyBase *>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })propertiesToFetchForPropertyKey:(id)arg1;
- (void)setAllowedItemPredicatesBlock:(id /* block */)arg1;
- (void)setEntityQueryBlock:(id /* block */)arg1;

@end
