
@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject {
    NSMutableDictionary * _assertionsPerPID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)sharedInstance;

- (id)addAssertionWithName:(id)arg1 forPID:(int)arg2;
- (id)init;
- (void)removeAssertionWithToken:(id)arg1;

@end
