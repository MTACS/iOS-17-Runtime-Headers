
@interface LiveFSXattrCacheEntry : NSObject {
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _addedTime;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _lastUsedTime;
    void * _xattrBytes;
    unsigned long long  _xattrSize;
}

@property (readonly) struct timespec { long long x1; long long x2; } addedTime;
@property struct timespec { long long x1; long long x2; } lastUsedTime;
@property (readonly) void*xattrBytes;
@property (readonly) unsigned long long xattrSize;

- (struct timespec { long long x1; long long x2; })addedTime;
- (void)dealloc;
- (id)initWithData:(id)arg1 andTime:(const struct timespec { long long x1; long long x2; }*)arg2;
- (bool)isExpiredAsOf:(const struct timespec { long long x1; long long x2; }*)arg1 forLifetime:(unsigned long long)arg2;
- (struct timespec { long long x1; long long x2; })lastUsedTime;
- (void)setLastUsedTime:(struct timespec { long long x1; long long x2; })arg1;
- (void*)xattrBytes;
- (unsigned long long)xattrSize;

@end
