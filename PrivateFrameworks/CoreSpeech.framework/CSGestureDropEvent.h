
@interface CSGestureDropEvent : NSObject {
    double  _droppedPrediction;
    double  _droppingPrediction;
    double  _timestamp;
}

@property (nonatomic, readonly) double droppedPrediction;
@property (nonatomic, readonly) double droppingPrediction;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

- (double)droppedPrediction;
- (double)droppingPrediction;
- (id)initWithDroppingPrediction:(double)arg1 droppedPrediction:(double)arg2 timestamp:(double)arg3;
- (id)initWithXPCObject:(id)arg1;
- (double)timestamp;
- (id)toString;
- (id)xpcObject;

@end
