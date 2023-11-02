
@interface _XRSpaceNotificationShim : NSObject {
    <NSObject> * _observer;
    XRSpace * _space;
    <NSObject> * _target;
    bool  _targetIsSet;
    <NSObject> * _token;
}

@property (nonatomic) <NSObject> *observer;
@property (nonatomic) XRSpace *space;
@property (nonatomic) <NSObject> *target;
@property (nonatomic) bool targetIsSet;
@property (nonatomic, retain) <NSObject> *token;

- (void).cxx_destruct;
- (void)dealloc;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void)setSpace:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetIsSet:(bool)arg1;
- (void)setToken:(id)arg1;
- (id)space;
- (id)target;
- (bool)targetIsSet;
- (id)token;

@end
