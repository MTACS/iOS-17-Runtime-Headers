
@interface HMBCloudPushHandler : HMFObject <HMBAPSConnectionDelegate, HMFLogging> {
    <HMBAPSConnection> * _apsConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _apsLock;
    NSMapTable * _bundleIdentifiersByObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedHandlerForEnvironment:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)initWithAPSConnection:(id)arg1;
- (void)removeAllObserversForBundleIdentifier:(id)arg1;

@end
