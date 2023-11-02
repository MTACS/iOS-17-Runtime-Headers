
@interface _XRExpiredPidCache : NSObject {
    int  enableCount;
    NSObject<OS_xpc_object> * pidWatcher;
    NSMutableDictionary * signatures;
}

- (void).cxx_destruct;

@end
