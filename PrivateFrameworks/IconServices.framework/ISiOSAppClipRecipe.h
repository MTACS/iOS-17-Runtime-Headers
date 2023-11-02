
@interface ISiOSAppClipRecipe : NSObject <ISCompositorRecipe> {
    bool  _shouldOnlyDrawBorder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool shouldOnlyDrawBorder;
@property (readonly) Class superclass;

- (id)appRect;
- (id)blurRadius;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setShouldOnlyDrawBorder:(bool)arg1;
- (bool)shouldOnlyDrawBorder;

@end
