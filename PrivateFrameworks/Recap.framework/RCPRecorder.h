
@interface RCPRecorder : NSObject {
    NSMutableSet * _activeRecorders;
    struct __CFRunLoop { } * _ioRunLoop;
    RCPEventAction * _pointerLocationAction;
    bool  _shouldRecordInitialPointerLocation;
    bool  _shouldRecordSenderProperties;
}

@property (retain) RCPEventAction *pointerLocationAction;
@property bool shouldRecordInitialPointerLocation;
@property bool shouldRecordSenderProperties;

+ (void)registerEventStreamRecorder:(id)arg1;
+ (id)sharedRecorder;
+ (bool)shouldRecordSenderProperties;
+ (void)unregisterEventStreamRecorder:(id)arg1;

- (void).cxx_destruct;
- (struct __IOHIDEvent { }*)_initialLocationEvent;
- (struct __IOHIDEvent { }*)_newLocationEventFromNormalPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_registerIOHIDClient;
- (void)_unregisterIOHIDClient;
- (id)pointerLocationAction;
- (void)setPointerLocationAction:(id)arg1;
- (void)setShouldRecordInitialPointerLocation:(bool)arg1;
- (void)setShouldRecordSenderProperties:(bool)arg1;
- (bool)shouldRecordInitialPointerLocation;
- (bool)shouldRecordSenderProperties;

@end
