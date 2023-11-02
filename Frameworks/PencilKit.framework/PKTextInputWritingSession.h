
@interface PKTextInputWritingSession : NSObject {
    double  _beginTimestamp;
    PKTextInputElement * _currentTargetElement;
    <PKTextInputWritingSessionDelegate> * _delegate;
    bool  _didSuppressGesturesOverReservedSpace;
    bool  _isInvalidated;
    NSMutableSet * _pendingWritingEndedElements;
    NSNumber * _sessionIdentifier;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
