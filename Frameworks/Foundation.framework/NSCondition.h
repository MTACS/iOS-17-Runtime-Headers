
@interface NSCondition : NSObject <NSLocking> {
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  c;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  m;
    NSString * n;
}

@property (copy) NSString *name;

- (void)broadcast;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (void)signal;
- (void)unlock;
- (void)wait;
- (bool)waitUntilDate:(id)arg1;

@end
