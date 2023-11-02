
@interface PXCuratedLibraryZoomLevelControl : UIView <PXChangeObserver> {
    UIVisualEffectView * _backgroundEffectView;
    <PXCuratedLibraryZoomLevelControlDelegate> * _delegate;
    NSArray * _enabledZoomLevelIdentifiers;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicSize;
    double  _minimumInterTextSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    _PXCuratedLibraryZoomLevelSegmentedControl * _segmentedControl;
    long long  _selectedZoomLevel;
    long long  _shrinkLevel;
    PXCuratedLibraryStyleGuide * _styleGuide;
    struct CGSize { double x1; double x2; } * _textSizes;
    PXUpdater * _updater;
    PXCuratedLibraryViewModel * _viewModel;
    NSArray * _zoomLevelIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCuratedLibraryZoomLevelControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enabledZoomLevelIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedZoomLevel;
@property (nonatomic) long long shrinkLevel;
@property (nonatomic, readonly) PXCuratedLibraryStyleGuide *styleGuide;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) NSArray *zoomLevelIdentifiers;

+ (id)_allZoomLevelIdentifiers;
+ (id)_enabledZoomLevelIdentifiersForViewModel:(id)arg1;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleSegmentedControlAction:(id)arg1;
- (void)_invalidateSegmentedControl;
- (void)_updateSegmentedControl;
- (void)dealloc;
- (id)delegate;
- (id)enabledZoomLevelIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithViewModel:(id)arg1 styleGuide:(id)arg2;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)selectedZoomLevel;
- (void)setDelegate:(id)arg1;
- (void)setEnabledZoomLevelIdentifiers:(id)arg1;
- (void)setSelectedZoomLevel:(long long)arg1;
- (void)setShrinkLevel:(long long)arg1;
- (long long)shrinkLevel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)styleGuide;
- (id)viewModel;
- (long long)zoomLevelDisplayedBeforeZoomLevel:(long long)arg1;
- (id)zoomLevelIdentifiers;

@end
