
@interface PXTilingControllerDefaultComposition : PXTilingControllerComposition {
    NSSet * _tilingControllers;
}

@property (nonatomic, copy) NSSet *tilingControllers;

- (void).cxx_destruct;
- (void)setTilingControllers:(id)arg1;
- (id)tilingControllers;
- (void)updateComposition;

@end
