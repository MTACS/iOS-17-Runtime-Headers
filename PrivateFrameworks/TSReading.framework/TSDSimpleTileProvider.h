
@interface TSDSimpleTileProvider : TSDTileProvider {
    SEL  mAction;
}

@property (nonatomic) SEL action;

- (SEL)action;
- (bool)canTargetDrawInParallel;
- (void)drawTargetInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (bool)isTargetOpaque;
- (void)setAction:(SEL)arg1;

@end
