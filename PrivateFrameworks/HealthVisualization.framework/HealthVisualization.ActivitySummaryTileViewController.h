
@interface HealthVisualization.ActivitySummaryTileViewController : UIViewController {
    void activitySummaryView;
    void context;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  detail;
    void glyph;
    void hkType;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)updateLabels;
- (void)updateLayout;
- (void)viewDidLoad;

@end
