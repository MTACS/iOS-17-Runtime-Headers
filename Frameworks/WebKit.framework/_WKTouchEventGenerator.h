
@interface _WKTouchEventGenerator : NSObject {
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
    NSMutableDictionary * _eventCallbacks;
    struct RetainPtr<__IOHIDEventSystemClient *> { 
        void *m_ptr; 
    }  _ioSystemClient;
}

@property (nonatomic, retain) NSMutableDictionary *eventCallbacks;

+ (long long)nextEventCallbackID;
+ (id)sharedTouchEventGenerator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __IOHIDEvent { }*)_createIOHIDEventType:(int)arg1;
- (bool)_sendHIDEvent:(struct __IOHIDEvent { }*)arg1 window:(id)arg2;
- (bool)_sendMarkerHIDEventInWindow:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_updateTouchPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 window:(id)arg3;
- (void)dealloc;
- (id)eventCallbacks;
- (id)init;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2 window:(id)arg3;
- (void)liftUp:(struct CGPoint { double x1; double x2; })arg1 window:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)liftUpAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 window:(id)arg3;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 window:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)moveToPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 duration:(double)arg3 window:(id)arg4;
- (void)receivedHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)setEventCallbacks:(id)arg1;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1 touchCount:(unsigned long long)arg2 window:(id)arg3;
- (void)touchDown:(struct CGPoint { double x1; double x2; })arg1 window:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)touchDownAtPoints:(struct CGPoint { double x1; double x2; }*)arg1 touchCount:(unsigned long long)arg2 window:(id)arg3;

@end
