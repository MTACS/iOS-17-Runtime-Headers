
@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject {
    void * _foreignPropertyBase;
    Class  _relationshipModelClass;
    struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _relationshipValidationProperties;
    bool  _transient;
    id /* block */  _validRelationshipHandler;
}

@property (nonatomic, readonly) MPMediaLibraryEntityTranslator *entityTranslator;
@property (nonatomic) void*foreignPropertyBase;
@property (nonatomic) Class relationshipModelClass;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<std::unordered_map<std::string' */ struct  relationshipValidationProperties; /* unknown property attribute:  mlcore::ModelPropertyBase *>>=^v^{__shared_weak_count}} */
@property (nonatomic) bool transient;
@property (nonatomic, copy) id /* block */ validRelationshipHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)entityTranslator;
- (void*)foreignPropertyBase;
- (Class)relationshipModelClass;
- (struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x1; struct __shared_weak_count {} *x2; })relationshipValidationProperties;
- (void)setForeignPropertyBase:(void*)arg1;
- (void)setRelationshipModelClass:(Class)arg1;
- (void)setRelationshipValidationProperties:(struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTransient:(bool)arg1;
- (void)setValidRelationshipHandler:(id /* block */)arg1;
- (bool)transient;
- (id /* block */)validRelationshipHandler;

@end
