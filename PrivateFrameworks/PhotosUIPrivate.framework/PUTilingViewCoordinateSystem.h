
@interface PUTilingViewCoordinateSystem : NSObject <PUTilingCoordinateSystem> {
    PUTilingView * _tilingView;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } coordinateSystemOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PUTilingCoordinateSystem> *parentCoordinateSystem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUTilingView *tilingView;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })coordinateSystemOrigin;
- (id)init;
- (id)initWithTilingView:(id)arg1;
- (id)parentCoordinateSystem;
- (id)tilingView;

@end
