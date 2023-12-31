
@interface AVRoutingSession : NSObject {
    AVRoutingSessionInternal * _ivars;
}

@property (readonly) AVRoutingSessionDestination *destination;
@property (readonly) bool establishedAutomaticallyFromLikelyDestination;

- (void)dealloc;
- (id)description;
- (id)destination;
- (bool)establishedAutomaticallyFromLikelyDestination;
- (id)init;
- (id)initWithFigRoutingSession:(struct OpaqueFigRoutingSession { }*)arg1;

@end
