
@interface RBImageQueueContents : NSObject <CARenderValue, NSSecureCoding> {
    struct objc_ptr<id> { 
        id _p; 
    }  _proxy;
    struct cf_ptr<_CAImageQueue *> { 
        struct _CAImageQueue {} *_p; 
    }  _queue;
    struct refcounted_ptr<RB::Surface> { 
        struct Surface {} *_p; 
    }  _surface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)CA_copyRenderValue;
- (void*)CA_copyRenderValueWithColorspace:(struct CGColorSpace { }*)arg1;
- (void)CA_prepareRenderValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
