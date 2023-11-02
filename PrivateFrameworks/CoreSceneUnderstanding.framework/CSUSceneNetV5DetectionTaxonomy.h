
@interface CSUSceneNetV5DetectionTaxonomy : CSUTaxonomy {
    struct shared_ptr<csu::Taxonomy<csu::ObjectDetectionTaxonomyNode>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _detectionTaxonomy;
}

@property (nonatomic, readonly) struct shared_ptr<csu::Taxonomy<csu::ObjectDetectionTaxonomyNode>> { void *x1; struct __shared_weak_count {} *x2; } taxonomy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTaxonomy:(struct shared_ptr<csu::Taxonomy<csu::ObjectDetectionTaxonomyNode>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<csu::Taxonomy<csu::ObjectDetectionTaxonomyNode>> { void *x1; struct __shared_weak_count {} *x2; })taxonomy;

@end
