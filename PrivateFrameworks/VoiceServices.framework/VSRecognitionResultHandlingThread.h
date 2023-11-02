
@interface VSRecognitionResultHandlingThread : NSObject {
    <VSRecognitionResultHandlingThreadDelegate> * _delegate;
    NSConditionLock * _lock;
    NSMutableArray * _requests;
    struct { 
        unsigned int running : 1; 
        unsigned int delegateDidHandleResults : 1; 
        unsigned int valid : 1; 
    }  _resultHandlingFlags;
}

- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)arg1;
- (void)dealloc;
- (void)handleResults:(id)arg1 withHandler:(id)arg2;
- (id)init;
- (void)invalidate;
- (void)setDelegate:(id)arg1;

@end
