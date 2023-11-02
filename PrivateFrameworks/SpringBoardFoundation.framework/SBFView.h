
@interface SBFView : UIView <SBFCustomImplicitPropertyAnimating> {
    id /* block */  _didMoveToWindowHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    NSArray * animatedLayerProperties;
}

@property (nonatomic, copy) NSArray *animatedLayerProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didMoveToWindowHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)animatedLayerProperties;
- (void)didMoveToWindow;
- (id /* block */)didMoveToWindowHandler;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAnimatedLayerProperties:(id)arg1;
- (void)setDidMoveToWindowHandler:(id /* block */)arg1;
- (void)setIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
