
@interface UIAccessibilityHierarchyEncoder : NSObject {
    id  _rootElement;
    bool  _shouldResolveRemoteElements;
    UIAccessibilityElementTraversalOptions * _traversalOptions;
}

@property (nonatomic, retain) id rootElement;
@property (nonatomic) bool shouldResolveRemoteElements;
@property (nonatomic, retain) UIAccessibilityElementTraversalOptions *traversalOptions;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertAccessibilityFrameOfElement:(id)arg1 toViewSpaceOfContainer:(id)arg2 remoteParent:(id)arg3;
- (void)_resolveLeafElementsForRemoteElement:(id)arg1 rootElement:(id)arg2 addingToLeafElementDescriptions:(id)arg3;
- (id)encodeWithError:(id*)arg1;
- (id)encodeWithLeafElements:(id)arg1 error:(id*)arg2;
- (id)initWithRootElement:(id)arg1 traversalOptions:(id)arg2;
- (id)rootElement;
- (void)setRootElement:(id)arg1;
- (void)setShouldResolveRemoteElements:(bool)arg1;
- (void)setTraversalOptions:(id)arg1;
- (bool)shouldResolveRemoteElements;
- (id)traversalOptions;

@end
