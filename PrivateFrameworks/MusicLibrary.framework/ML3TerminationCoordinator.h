
@interface ML3TerminationCoordinator : NSObject {
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableSet * _signatures;
}

@property (nonatomic, readonly) bool isSigned;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)_performTermination;
- (void)dealloc;
- (void)execute;
- (id)init;
- (bool)isSigned;
- (bool)isSignedForReason:(long long)arg1;
- (void)secedeForReason:(long long)arg1;
- (void)signForReason:(long long)arg1;

@end
