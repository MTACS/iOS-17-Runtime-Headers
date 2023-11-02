
@interface _WKFrameHandle : NSObject <NSCopying, NSSecureCoding, WKObject> {
    struct ObjectStorage<API::FrameHandle> { 
        struct type { 
            unsigned char __lx[40]; 
        } data; 
    }  _frameHandle;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long frameID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
