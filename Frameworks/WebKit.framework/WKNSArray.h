
@interface WKNSArray : NSArray <WKObject> {
    struct ObjectStorage<API::Array> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _array;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
