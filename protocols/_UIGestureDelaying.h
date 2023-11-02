
@protocol _UIGestureDelaying <NSObject>

@required

- (long long)phaseForDelivery;
- (double)timestampForDelivery;

@end
