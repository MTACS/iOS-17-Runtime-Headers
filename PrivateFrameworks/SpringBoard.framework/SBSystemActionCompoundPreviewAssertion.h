
@interface SBSystemActionCompoundPreviewAssertion : NSObject {
    id /* block */  _eventHandlingBlock;
    NSCountedSet * _expansionReasons;
    NSString * _identifier;
    SBSystemActionPreviewAssertion * _lastAcquiredAssertion;
    NSCountedSet * _previewingReasons;
    struct SBSystemActionCompoundPreviewState { 
        bool isPreviewing; 
        bool isExpanding; 
        bool isProminent; 
        bool isUrgent; 
    }  _state;
    id /* block */  _stateDidChangeBlock;
    NSCountedSet * _urgencyReasons;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
