
@interface WKNSDictionary : NSDictionary <WKObject> {
    struct ObjectStorage<API::Dictionary> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _dictionary;
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
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
