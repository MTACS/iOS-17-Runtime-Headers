
@interface UIAccessibilityHitTestOptions : NSObject {
    id /* block */  _fallbackPredicate;
    id /* block */  _isEligibleElement;
    id /* block */  _leafNodePredicate;
    NSArray * _outOfBoundsHitTestElements;
    bool  _shouldHitTestUserTestingChildren;
}

@property (nonatomic, copy) id /* block */ fallbackPredicate;
@property (nonatomic, copy) id /* block */ isEligibleElement;
@property (nonatomic, copy) id /* block */ leafNodePredicate;
@property (nonatomic, retain) NSArray *outOfBoundsHitTestElements;
@property (nonatomic) bool shouldHitTestUserTestingChildren;

+ (id)defaultOptions;
+ (id)dwellControlElementHighlightOptions;

- (void).cxx_destruct;
- (id /* block */)fallbackPredicate;
- (id /* block */)isEligibleElement;
- (id /* block */)leafNodePredicate;
- (id)outOfBoundsHitTestElements;
- (void)setFallbackPredicate:(id /* block */)arg1;
- (void)setIsEligibleElement:(id /* block */)arg1;
- (void)setLeafNodePredicate:(id /* block */)arg1;
- (void)setOutOfBoundsHitTestElements:(id)arg1;
- (void)setShouldHitTestUserTestingChildren:(bool)arg1;
- (bool)shouldHitTestUserTestingChildren;

@end
