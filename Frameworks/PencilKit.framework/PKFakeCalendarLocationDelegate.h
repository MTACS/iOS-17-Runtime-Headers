
@interface PKFakeCalendarLocationDelegate : NSObject <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource> {
    UITableViewCell * _cell;
    NSUUID * _elementID;
    UITableView * _tableView;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (id)_searchBarInView:(id)arg1;
- (id)initWithCell:(id)arg1 window:(id)arg2;

@end
