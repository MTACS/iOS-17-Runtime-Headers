
@interface UIEventSessionTouchEvent : NSObject {
    NSMutableDictionary * _touchStatus;
    long long  _touchType;
    long long  _trackpadFingerDownCount;
}

@property (nonatomic, retain) NSMutableDictionary *touchStatus;
@property long long touchType;
@property long long trackpadFingerDownCount;

- (void).cxx_destruct;
- (bool)containsTouchID:(id)arg1;
- (id)initWithTouchType:(long long)arg1 withTrackpadFingerDownCount:(long long)arg2;
- (void)setTouchStatus:(id)arg1;
- (void)setTouchType:(long long)arg1;
- (void)setTrackpadFingerDownCount:(long long)arg1;
- (id)touchStatus;
- (long long)touchType;
- (long long)trackpadFingerDownCount;

@end
