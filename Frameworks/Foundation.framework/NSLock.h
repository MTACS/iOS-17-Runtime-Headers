
@interface NSLock : NSObject <HMFLocking, NSLocking> {
    struct { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } m; 
        struct { /* ? */ } *cd; 
        NSString *n; 
    }  _priv;
}

@property (copy) NSString *name;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (bool)lockBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (void)unlock;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void)hk_withLock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (void)performBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void)mf_waitForLock;

@end
