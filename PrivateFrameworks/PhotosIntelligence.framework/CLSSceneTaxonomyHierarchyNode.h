
@interface CLSSceneTaxonomyHierarchyNode : NSObject {
    bool  _forSceneNetOnly;
    PFSceneTaxonomy * _sceneTaxonomy;
    void * _taxonomyNodeRef;
}

@property (readonly) unsigned int identifier;
@property (readonly) bool isIndexed;
@property (readonly) NSString *localizedName;
@property (readonly) NSSet *localizedSynonyms;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (unsigned int)identifier;
- (id)initWithSceneTaxonomyNodeRef:(void*)arg1 inSceneTaxonomy:(id)arg2 forSceneNetOnly:(bool)arg3;
- (bool)isIndexed;
- (id)localizedName;
- (id)localizedSynonyms;
- (id)name;
- (void)traverseChildrenUsingNameBlock:(id /* block */)arg1;
- (void)visitChildrenUsingNameBlock:(id /* block */)arg1;
- (void)visitParentsUsingNameBlock:(id /* block */)arg1;

@end
