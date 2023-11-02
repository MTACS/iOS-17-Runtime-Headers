
@interface _UIBarCustomizationContainerView : UIView {
    <_UITraitEnvironmentInternal> * _parentTraitEnvironment;
    id /* block */  _traitChangeHandler;
}

@property (nonatomic) <_UITraitEnvironmentInternal> *parentTraitEnvironment;
@property (nonatomic, copy) id /* block */ traitChangeHandler;

- (void).cxx_destruct;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x1; id x2; id x3; bool x4; struct _UITraitCollectionTraitChanges { bool x_5_1_1; bool x_5_1_2; } x5; }*)arg1;
- (id)initWithParentTraitEnvironment:(id)arg1;
- (id)parentTraitEnvironment;
- (void)setParentTraitEnvironment:(id)arg1;
- (void)setTraitChangeHandler:(id /* block */)arg1;
- (id /* block */)traitChangeHandler;
- (id)traitCollection;

@end
