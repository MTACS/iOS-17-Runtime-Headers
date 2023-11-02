
@interface SUUIExploreTemplateElement : SUUIViewElement {
    bool  _usesSplits;
}

@property (nonatomic, readonly) NSArray *childViewElements;
@property (nonatomic, readonly) SUUIViewElement *leftSplit;
@property (nonatomic, readonly) SUUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) SUUIViewElement *rightSplit;
@property (nonatomic, readonly) bool usesSplits;

- (void)_getLeftSplit:(id*)arg1 rightSplit:(id*)arg2;
- (id)childViewElements;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)leftSplit;
- (id)navigationBarElement;
- (id)rightSplit;
- (bool)usesSplits;

@end
