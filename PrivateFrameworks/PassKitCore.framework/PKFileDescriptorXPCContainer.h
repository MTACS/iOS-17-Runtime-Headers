
@interface PKFileDescriptorXPCContainer : NSObject <NSSecureCoding, PKInvalidatable> {
    NSObject<OS_xpc_object> * _fd;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writeLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithXPCFileDescriptor:(id)arg1;
- (void)accessFileDescriptorWithBlock:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;

@end
