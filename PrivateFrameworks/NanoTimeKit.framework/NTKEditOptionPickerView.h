
@interface NTKEditOptionPickerView : UIView {
    bool  _active;
    UIView<NTKEditOptionContainerView> * _containerView;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentTransform;
    unsigned long long  _numberOfOptions;
    id /* block */  _optionToViewMapper;
    NSArray * _options;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    unsigned long long  _selectedOptionIndex;
    unsigned long long  _visibleOptionBufferSize;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) UIView<NTKEditOptionContainerView> *containerView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentTransform;
@property (nonatomic, readonly) unsigned long long numberOfOptions;
@property (nonatomic) unsigned long long numberOfSides;
@property (nonatomic, copy) id /* block */ optionToViewMapper;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) id selectedOption;
@property (nonatomic) unsigned long long selectedOptionIndex;

- (void).cxx_destruct;
- (void)_configureSideView:(id)arg1 forOption:(id)arg2;
- (void)_enumerateSideViewsWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContainerView;
- (id)_newContainerView;
- (id)_selectedSideView;
- (id)_sideViewAtIndex:(unsigned long long)arg1;
- (Class)_sideViewClass;
- (void)_tileContainerForTransitionDirection:(long long)arg1;
- (void)_transitionAnimatedToSelectedOptionFromIndex:(unsigned long long)arg1;
- (void)_transitionToSelectedOption;
- (void)_updateContainer;
- (void)_willDisplaySideView:(id)arg1;
- (bool)active;
- (void)applyBreathingScale:(double)arg1;
- (void)applyRubberBandingFraction:(double)arg1;
- (id)containerView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentTransform;
- (void)decrementSelection;
- (id)description;
- (void)incrementSelection;
- (id)initWithOptions:(id)arg1 selectedOption:(id)arg2;
- (void)layoutSubviews;
- (unsigned long long)numberOfOptions;
- (unsigned long long)numberOfSides;
- (id)optionAtIndex:(unsigned long long)arg1;
- (id /* block */)optionToViewMapper;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)selectedOption;
- (unsigned long long)selectedOptionIndex;
- (void)setActive:(bool)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setNumberOfSides:(unsigned long long)arg1;
- (void)setOptionToViewMapper:(id /* block */)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedOptionIndex:(unsigned long long)arg1;
- (void)setSelectedOptionIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

@end
