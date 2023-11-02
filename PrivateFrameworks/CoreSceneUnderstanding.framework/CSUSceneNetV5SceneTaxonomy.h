
@interface CSUSceneNetV5SceneTaxonomy : CSUTaxonomy {
    struct shared_ptr<csu::Taxonomy<csu::SceneNetSceneCategoryAttributes>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sceneTaxonomy;
}

@property (nonatomic, readonly) struct shared_ptr<csu::Taxonomy<csu::SceneNetSceneCategoryAttributes>> { void *x1; struct __shared_weak_count {} *x2; } taxonomy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributesForLabel:(id)arg1;
- (id)initWithTaxonomy:(struct shared_ptr<csu::Taxonomy<csu::SceneNetSceneCategoryAttributes>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<csu::Taxonomy<csu::SceneNetSceneCategoryAttributes>> { void *x1; struct __shared_weak_count {} *x2; })taxonomy;

@end
