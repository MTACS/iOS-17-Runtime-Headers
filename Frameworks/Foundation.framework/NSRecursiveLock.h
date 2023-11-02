
@interface NSRecursiveLock : NSObject <HMFLocking, NSLocking> {
    struct { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } m; 
        struct _opaque_pthread_t {} *t; 
        unsigned long long cnt; 
        struct { /* ? */ } *cd; 
        NSString *n; 
    }  _priv;
}

@property (copy) NSString *name;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isLocking;
- (void)lock;
- (bool)lockBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (void)unlock;

// Image: /System/Library/PrivateFrameworks/DropIn.framework/DropIn

- (void)synchronize:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DropInCore.framework/DropInCore

- (void)synchronize:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (void)performBlock:(id /* block */)arg1;

@end
