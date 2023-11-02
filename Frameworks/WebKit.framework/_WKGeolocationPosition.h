
@interface _WKGeolocationPosition : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebGeolocationPosition> { 
        struct type { 
            unsigned char __lx[128]; 
        } data; 
    }  _geolocationPosition;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)positionWithLocation:(id)arg1;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;

@end
