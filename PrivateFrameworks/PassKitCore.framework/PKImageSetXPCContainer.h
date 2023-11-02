
@interface PKImageSetXPCContainer : NSObject <NSSecureCoding, PKInvalidatable> {
    NSObject<OS_xpc_object> * _data;
    NSData * _imageSetHash;
    bool  _invalidated;
    bool  _isShmem;
    unsigned long long  _length;
    unsigned long long  _offset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageSetHash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containedImageSet;
- (void)encodeWithCoder:(id)arg1;
- (id)imageSetHash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithXPCObject:(id)arg1 hash:(id)arg2;
- (id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(bool)arg3 offset:(unsigned long long)arg4 hash:(id)arg5;
- (void)invalidate;
- (bool)isInvalidated;

@end
