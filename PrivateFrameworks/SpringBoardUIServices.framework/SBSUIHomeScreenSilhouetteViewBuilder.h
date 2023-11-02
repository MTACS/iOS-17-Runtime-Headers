
@interface SBSUIHomeScreenSilhouetteViewBuilder : NSObject {
    id /* block */  _dockViewBuilder;
    id /* block */  _iconViewBuilder;
    bool  _includesDock;
    id /* block */  _rootViewBuilder;
    SBSHomeScreenSilhouetteLayout * _silhouetteLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic, copy) id /* block */ dockViewBuilder;
@property (nonatomic, copy) id /* block */ iconViewBuilder;
@property (nonatomic) bool includesDock;
@property (nonatomic, copy) id /* block */ rootViewBuilder;
@property (nonatomic, readonly, copy) SBSHomeScreenSilhouetteLayout *silhouetteLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewSize;

- (void).cxx_destruct;
- (id)buildView;
- (id /* block */)dockViewBuilder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)iconViewBuilder;
- (bool)includesDock;
- (id)initWithSilhouetteLayout:(id)arg1 viewSize:(struct CGSize { double x1; double x2; })arg2;
- (id)makeDockView;
- (id)makeIconView;
- (id)makeRootView;
- (id /* block */)rootViewBuilder;
- (void)setDockViewBuilder:(id /* block */)arg1;
- (void)setIconViewBuilder:(id /* block */)arg1;
- (void)setIncludesDock:(bool)arg1;
- (void)setRootViewBuilder:(id /* block */)arg1;
- (id)silhouetteLayout;
- (struct CGSize { double x1; double x2; })viewSize;

@end
