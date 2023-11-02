
@interface WKNSData : NSData <WKObject> {
    struct ObjectStorage<API::Data> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _data;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)length;

@end
