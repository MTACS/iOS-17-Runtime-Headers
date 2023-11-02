
@interface UIGestureDelayedTouch : NSObject <NSCopying, _UIGestureDelaying> {
    bool  _cloneForSecondDelivery;
    long long  _delayCount;
    UIEvent * _event;
    UITouch * _stateWhenDelayed;
    UITouch * _stateWhenDelivered;
    UITouch * _touch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (long long)phaseForDelivery;
- (double)timestampForDelivery;

@end
