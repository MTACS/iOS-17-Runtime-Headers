
@interface _UIUpdateHIDDigitizerInput : NSObject <_UIUpdateHIDAbstractInput> {
    long long  _eventModelTimeDifferenceMax;
    long long  _eventModelTimeDifferenceMin;
    unsigned long long  _eventPhaseTime;
    NSMutableArray * _events;
    struct _UIUpdateInputInternal { 
        struct _UIUpdateInputState { 
            int mode; 
            unsigned long long earliestModelTime; 
            unsigned long long latestModelTime; 
        } _state; 
        unsigned int _flags; 
        struct _UIUpdateInputAlignmentShift { 
            long long shiftDuration; 
        } _alignments[2]; 
        struct _UIUpdateInputSet {} *_set; 
        struct { 
            struct _UIUpdateInputInternal {} *le_next; 
            struct _UIUpdateInputInternal {} **le_prev; 
        } _setEntry; 
        int (*_readyForModelTimeCallback)(); 
        void *_context; 
        char *_name; 
    }  _input;
    bool  _nextEventExpected;
    long long  _nextEventReceiveDeadlineTimeDifference;
    struct _UIUpdateInputTimingProfile { long long x1; long long x2; unsigned long long x3; bool x4; long long x5; bool x6; unsigned long long x7; unsigned long long x8; struct _UIUpdateInputReadyProfile {} *x9; struct _UIUpdateInputReadyProfile {} *x10; } * _profile;
    NSMutableSet * _touches;
}

- (void).cxx_destruct;
- (void)addEvent:(struct __IOHIDEvent { }*)arg1;
- (void)dealloc;
- (void)removeEvent:(struct __IOHIDEvent { }*)arg1;
- (struct __IOHIDEvent { }*)stopEventForModelTime:(unsigned long long)arg1 alignment:(int)arg2;

@end
