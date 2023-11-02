
@interface UIGestureDelayedPress : NSObject <NSCopying, _UIGestureDelaying> {
    bool  _cloneForSecondDelivery;
    long long  _delayCount;
    UIPressesEvent * _event;
    UIPress * _press;
    UIPress * _stateWhenDelayed;
    UIPress * _stateWhenDelivered;
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
