
@interface AXElementActionManager : NSObject {
    AXDragManager * _dragManager;
    bool  _shouldIncludeMedusaActions;
}

@property (nonatomic, readonly) AXDragManager *dragManager;
@property (nonatomic, readonly) bool isDragActive;
@property (nonatomic) bool shouldIncludeMedusaActions;

- (void).cxx_destruct;
- (id)actionsForElement:(id)arg1;
- (bool)canShowActionsForElement:(id)arg1;
- (id)dragManager;
- (id)initWithDragManager:(id)arg1;
- (id)initWithDragServiceName:(id)arg1;
- (bool)isDragActive;
- (bool)performAction:(id)arg1;
- (void)setShouldIncludeMedusaActions:(bool)arg1;
- (bool)shouldIncludeMedusaActions;

@end
