
@interface _UIEstimatedTouchRecord : NSObject {
    NSNumber * _contextID;
    UITouch * _frozenTouch;
    UITouch * _liveTouch;
    NSMutableArray * _touchables;
}

@property (nonatomic, readonly) NSNumber *contextID;
@property (nonatomic, readonly) UITouch *frozenTouch;
@property (nonatomic, readonly) UITouch *liveTouch;
@property (nonatomic, readonly) NSArray *touchables;

- (void).cxx_destruct;
- (void)addTouchable:(id)arg1;
- (id)contextID;
- (void)dispatchUpdateWithPressure:(double)arg1 stillEstimated:(bool)arg2;
- (id)frozenTouch;
- (id)initWithLiveTouch:(id)arg1 freezeTouch:(id)arg2 contextID:(id)arg3;
- (id)liveTouch;
- (void)removeTouchable:(id)arg1;
- (id)touchables;

@end
