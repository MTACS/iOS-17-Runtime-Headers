
@interface SBHTableViewController : UITableViewController {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rawKeyboardFrame;
    bool  _showNoResultsView;
    long long  _styleBeforeShowingNoResults;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic) bool showNoResultsView;

+ (Class)tableViewClass;

- (void)_keyboardWillDismiss:(id)arg1;
- (void)_keyboardWillResize:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_reloadNoResultsViewForKeyboardNotification:(id)arg1;
- (double)headerTopOccludingInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (void)setShowNoResultsView:(bool)arg1;
- (bool)showNoResultsView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
