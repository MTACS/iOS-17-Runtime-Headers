
@protocol PXGRendererDelegate <NSObject>

@required

- (void)renderer:(id <PXGRenderer>)arg1 viewportSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (void)rendererDidChangeTextureConverter:(id <PXGRenderer>)arg1;
- (void)rendererNeedsUpdate:(id <PXGRenderer>)arg1;
- (void)rendererPerformRender:(id <PXGRenderer>)arg1;

@end
