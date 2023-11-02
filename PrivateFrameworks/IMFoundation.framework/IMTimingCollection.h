
@interface IMTimingCollection : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _timings;
}

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void).cxx_destruct;
- (id)description;
- (bool)hasKey:(id)arg1;
- (id)init;
- (void)removeTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)activeGlobalTimingCollections;
+ (id)globalTimingCollectionForKey:(id)arg1;
+ (void)invalidateGlobalTimingCollectionForKey:(id)arg1;
+ (void)invalidateGlobalTimingCollections;
+ (void)logTimingCollectionForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)IMCoreSetupTimingCollection;
+ (void)IMCoreSetupTimingCollectionEnd;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

+ (id)IMDaemonCoreMessageReceivedTimingCollection;

@end
