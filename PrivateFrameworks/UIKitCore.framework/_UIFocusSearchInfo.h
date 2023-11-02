
@interface _UIFocusSearchInfo : NSObject {
    id /* block */  _evaluator;
    bool  _forceFocusToLeaveContainer;
    bool  _treatFocusableItemAsLeaf;
}

@property (nonatomic, copy) id /* block */ evaluator;
@property (nonatomic) bool forceFocusToLeaveContainer;
@property (nonatomic) bool treatFocusableItemAsLeaf;

+ (id)defaultInfo;

- (void).cxx_destruct;
- (id /* block */)evaluator;
- (bool)forceFocusToLeaveContainer;
- (id)initWithFocusEvaluator:(id /* block */)arg1;
- (void)setEvaluator:(id /* block */)arg1;
- (void)setForceFocusToLeaveContainer:(bool)arg1;
- (void)setTreatFocusableItemAsLeaf:(bool)arg1;
- (bool)shouldIncludeFocusItem:(id)arg1;
- (bool)treatFocusableItemAsLeaf;

@end
