
@interface CLSSceneTaxonomyHierarchy : NSObject {
    bool  _forSceneNetOnly;
    PFSceneTaxonomy * _sceneTaxonomy;
}

- (void).cxx_destruct;
- (id)initForSceneNetOnly:(bool)arg1;
- (bool)nodeExistsForName:(id)arg1;
- (id)nodeForIdentifier:(unsigned int)arg1;
- (id)nodeForName:(id)arg1;
- (id)rootNode;

@end
