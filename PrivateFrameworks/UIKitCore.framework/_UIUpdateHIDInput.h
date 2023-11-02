
@interface _UIUpdateHIDInput : NSObject <_UIUpdateHIDAbstractInput> {
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
}

- (void).cxx_destruct;
- (void)addEvent:(struct __IOHIDEvent { }*)arg1;
- (id)init;
- (void)removeEvent:(struct __IOHIDEvent { }*)arg1;
- (struct __IOHIDEvent { }*)stopEventForModelTime:(unsigned long long)arg1 alignment:(int)arg2;

@end
