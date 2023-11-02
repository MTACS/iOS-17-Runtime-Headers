
@interface PaperKit.ShapeListViewController : UIViewController {
    void contentViewMargin;
    void delegate;
    void horizontalInterItemSpacing;
    void horizontalStackViews;
    void itemSize;
    void preferredPopoverSize;
    void stackView;
    void stackViewCols;
    void verticalInterItemSpacing;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)didSelectAddArrow:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddArrowShape:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddChatBubble:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddLine:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddOval:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddPolygon:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddRectangle:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddRoundedRect:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddStar:(id)arg1 withEvent:(id)arg2;
- (void)didSelectAddTriangle:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
