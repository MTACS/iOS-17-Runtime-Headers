
@interface AVResult : NSObject {
    NSError * _error;
    struct OpaqueFigSimpleMutex { } * _ivarAccessLock;
    long long  _status;
}

@property (getter=isFailed, readonly) bool failed;

- (void)dealloc;
- (void)getStatus:(long long*)arg1 error:(id*)arg2;
- (id)init;
- (bool)isFailed;
- (void)markAsCompleted;
- (void)markAsFailedWithError:(id)arg1;

@end
