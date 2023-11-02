
@interface VKCTextElement : VKCBaseElement {
    NSArray * __children;
    NSArray * _candidates;
    bool  _childrenCreated;
    NSArray * _components;
}

@property (nonatomic, copy) NSArray *_children;
@property (nonatomic, copy) NSArray *candidates;
@property (nonatomic) bool childrenCreated;
@property (nonatomic, copy) NSArray *components;

+ (id)textElementFromCROutputRegion:(id)arg1 parentDocument:(id)arg2;

- (void).cxx_destruct;
- (id)_children;
- (id)candidates;
- (id)children;
- (bool)childrenCreated;
- (id)components;
- (id)confidenceString;
- (id)crOutputRegionTypeString;
- (void)createChildrenIfNecessary;
- (id)elementCollectionForQuad:(id)arg1;
- (long long)elementType;
- (bool)isInspectableCellSelectable;
- (void)setCandidates:(id)arg1;
- (void)setChildrenCreated:(bool)arg1;
- (void)setComponents:(id)arg1;
- (void)set_children:(id)arg1;

@end
