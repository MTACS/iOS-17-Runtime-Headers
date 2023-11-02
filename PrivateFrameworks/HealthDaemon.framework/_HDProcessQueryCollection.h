
@interface _HDProcessQueryCollection : NSObject {
    HDQueryServerClientState * _clientState;
    NSString * _processBundleIdentifier;
    NSMutableDictionary * _queryServersByUUID;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;

@end
