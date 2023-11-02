
@interface _UIHIDTransformer : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    unsigned int  _contextId;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _eventTransform;
    _UIHIDContext * _hidContext;
    NSMutableDictionary * _hidContextByContextId;
    struct __IOHIDEvent { } * _hidEvent;
    NSMutableArray * _hidEvents;
}

@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic) unsigned int contextId;

- (void).cxx_destruct;
- (id)_inputEventsForHIDEvent:(struct __IOHIDEvent { }*)arg1 contextId:(unsigned int)arg2;
- (void)addOutputHIDEvent:(id)arg1;
- (struct CGSize { double x1; double x2; })canvasSize;
- (unsigned int)contextId;
- (id)drainOutputHIDEvents;
- (id)handleHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContextId:(unsigned int)arg1;

@end
