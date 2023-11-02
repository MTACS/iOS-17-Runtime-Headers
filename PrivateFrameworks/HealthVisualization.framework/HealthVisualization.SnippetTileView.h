
@interface HealthVisualization.SnippetTileView : UIView {
    void baseIdentifier;
    void context;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  detail;
    void glyph;
    void hkType;
    void snippetTileViewProvider;
    void snippetView;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)dayChanged;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLabels;

@end
