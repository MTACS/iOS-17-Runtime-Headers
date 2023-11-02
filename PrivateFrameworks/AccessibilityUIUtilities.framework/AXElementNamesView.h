
@interface AXElementNamesView : AXCyclingView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsForLastReload;
    NSMutableArray * _containers;
    bool  _didUpdateItems;
    NSArray * _items;
    NSObject<OS_os_log> * _loggingFacility;
    AXElementNamesStyleProvider * _styleProvider;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsForLastReload;
@property (nonatomic, readonly) NSMutableArray *containers;
@property (nonatomic) bool didUpdateItems;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSObject<OS_os_log> *loggingFacility;
@property (nonatomic, retain) AXElementNamesStyleProvider *styleProvider;

- (void).cxx_destruct;
- (void)_adjustLabelPositionForView:(id)arg1 toAvoidCollidingWithView:(id)arg2;
- (void)_arrangeNameViews:(id)arg1 withinContainer:(id)arg2;
- (void)_reloadViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForLastReload;
- (id)containers;
- (bool)didUpdateItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (void)layoutSubviews;
- (id)loggingFacility;
- (void)setBoundsForLastReload:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDidUpdateItems:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setLoggingFacility:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)viewsInCycle;

@end
