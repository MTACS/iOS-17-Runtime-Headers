
@interface _MPMediaLibraryEntityPropertyTranslator : NSObject {
    id /* block */  _filterTransformer;
    struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _propertiesToFetchMap;
    struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _propertiesToSortMap;
    id /* block */  _sortTransformer;
    id /* block */  _valueTransformer;
}

@property (nonatomic, copy) id /* block */ filterTransformer;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::unordered_map<std::string' */ struct  propertiesToFetchMap; /* unknown property attribute:  mlcore::ModelPropertyBase *>>=^v^{__shared_weak_count}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::unordered_map<std::string' */ struct  propertiesToSortMap; /* unknown property attribute:  mlcore::ModelPropertyBase *>>=^v^{__shared_weak_count}} */
@property (nonatomic, copy) id /* block */ sortTransformer;
@property (nonatomic, copy) id /* block */ valueTransformer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)filterTransformer;
- (struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x1; struct __shared_weak_count {} *x2; })propertiesToFetchMap;
- (struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x1; struct __shared_weak_count {} *x2; })propertiesToSortMap;
- (void)setFilterTransformer:(id /* block */)arg1;
- (void)setPropertiesToFetchMap:(struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setPropertiesToSortMap:(struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setSortTransformer:(id /* block */)arg1;
- (void)setValueTransformer:(id /* block */)arg1;
- (id /* block */)sortTransformer;
- (id /* block */)valueTransformer;

@end
