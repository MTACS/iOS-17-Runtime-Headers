
@interface _HDAuthorizationRequestGroup : NSObject {
    NSMutableArray * _completions;
    bool  _inTransaction;
    id /* block */  _promptHandler;
    NSUUID * _promptSessionIdentifier;
    NSMutableArray * _requests;
    NSObject<OS_dispatch_source> * _sessionTimeoutSource;
    HKSource * _source;
    NSMutableSet * _typesToRead;
    NSMutableSet * _typesToWrite;
}

- (void).cxx_destruct;
- (id)description;

@end
