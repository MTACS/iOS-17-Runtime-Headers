
@interface MPModelLibrarySearchEntityResultContainer : NSObject {
    struct shared_ptr<mlcore::EntityQueryResult> { 
        struct EntityQueryResult {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _entityQueryResult;
    MPMediaLibraryEntityTranslationContext * _entityTranslationContext;
    MPModelLibrarySearchScope * _scope;
}

@property (nonatomic, readonly) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; } entityQueryResult;
@property (nonatomic, readonly) MPMediaLibraryEntityTranslationContext *entityTranslationContext;
@property (nonatomic, readonly, copy) MPModelLibrarySearchScope *scope;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })entityQueryResult;
- (id)entityTranslationContext;
- (id)initWithEntityQueryResult:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })arg1 forScope:(id)arg2 entityTranslationContext:(id)arg3;
- (id)scope;

@end
