
@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _fence_name;
    unsigned long long  _handle_name;
    bool  _invalidated;
    struct Mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } _m; 
    }  _invalidation_mutex;
    struct SpinLock { 
        struct { 
            int x; 
        } _l; 
    }  _lock;
    unsigned int  _port;
}

@property (getter=isInvalidated, readonly) bool invalidated;
@property (getter=isUsable, readonly) bool usable;

+ (id)handleForPort:(unsigned int)arg1 fenceId:(unsigned long long)arg2;
+ (id)handleFromXPCRepresentation:(id)arg1;
+ (id)newFenceFromDefaultServer;
+ (id)newFenceFromServer:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void)accessMachPort:(id /* block */)arg1;
- (unsigned int)copyPort;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createXPCRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fenceId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (bool)isUsable;

@end
