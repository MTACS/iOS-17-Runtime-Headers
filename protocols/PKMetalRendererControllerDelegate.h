
@protocol PKMetalRendererControllerDelegate <NSObject>

@optional

- (void)metalRendererController:(PKMetalRendererController *)arg1 didCommitRenderingIntoTexture:(id <MTLTexture>)arg2;
- (<MTLTexture> *)nextTextureTargetForMetalRendererController:(PKMetalRendererController *)arg1;

@end
