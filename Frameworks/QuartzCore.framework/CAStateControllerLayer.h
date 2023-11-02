
@interface CAStateControllerLayer : NSObject {
    CAState * _currentState;
    CALayer * _layer;
    float  _nextSpeed;
    CAState * _nextState;
    NSTimer * _nextTimer;
    NSMutableArray * _transitions;
    CAStateControllerUndo * _undoStack;
}

@property (nonatomic, retain) CAState *currentState;
@property (readonly) CALayer *layer;
@property (readonly) CAStateControllerUndo *undoStack;

- (void)addTransition:(id)arg1;
- (id)currentState;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (void)invalidate;
- (id)layer;
- (void)removeTransition:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (id)undoStack;

@end
