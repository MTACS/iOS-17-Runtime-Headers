
@interface PKPassesXPCContainer : NSObject <NSSecureCoding, PKInvalidatable> {
    PKFileDescriptorXPCContainer * _fd;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _passFDs;
    long long  _status;
    NSURL * _temporaryOutputDirectory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *temporaryOutputDirectory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithFileDescriptorContainer:(id)arg1;
- (void)_unarchive;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (void)setTemporaryOutputDirectory:(id)arg1;
- (id)temporaryOutputDirectory;
- (struct { long long x1; unsigned long long x2; })unarchivePassesWithBlock:(id /* block */)arg1;
- (struct { long long x1; unsigned long long x2; })unarchivePassesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

@end
