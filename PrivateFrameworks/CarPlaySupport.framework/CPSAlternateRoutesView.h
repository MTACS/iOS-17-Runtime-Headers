
@interface CPSAlternateRoutesView : UIView <CPSLinearFocusProviding, CPSRouteRowInteracting> {
    NSArray * _availableRouteChoices;
    unsigned long long  _indexForSelectedRoute;
    UIView * _rowStack;
    <CPSAlternateRouteSelecting> * _selectionDelegate;
}

@property (nonatomic, retain) NSArray *availableRouteChoices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexForSelectedRoute;
@property (nonatomic, retain) UIView *rowStack;
@property (nonatomic) <CPSAlternateRouteSelecting> *selectionDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)_reloadRows;
- (id)availableRouteChoices;
- (void)didSelectRow:(id)arg1 representingRouteChoice:(id)arg2;
- (unsigned long long)indexForSelectedRoute;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;
- (id)rowStack;
- (id)selectionDelegate;
- (void)setAvailableRouteChoices:(id)arg1;
- (void)setIndexForSelectedRoute:(unsigned long long)arg1;
- (void)setRowStack:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;

@end
