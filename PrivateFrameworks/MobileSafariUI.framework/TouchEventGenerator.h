
@interface TouchEventGenerator : NSObject {
    unsigned long long  _activePointCount;
    struct { 
        int identifier; 
        struct CGPoint { 
            double x; 
            double y; 
        } point; 
        double pathMajorRadius; 
        double pathPressure; 
        unsigned char pathProximity; 
    }  _activePoints;
    struct __IOHIDEventSystemClient { } * _ioSystemClient;
}

+ (id)sharedTouchEventGenerator;

- (struct __IOHIDEvent { }*)_createIOHIDEventType:(int)arg1;
- (bool)_sendHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_updateTouchPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (id)init;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2;
- (void)liftUpAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2;

@end
