
@interface WKNavigationData : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationData> { 
        struct type { 
            unsigned char __lx[488]; 
        } data; 
    }  _data;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *destinationURL;
@property (readonly) unsigned long long hash;
@property (readonly) NSURLRequest *originalRequest;
@property (readonly) NSURLResponse *response;
@property (readonly) Class superclass;
@property (readonly) NSString *title;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (id)destinationURL;
- (id)originalRequest;
- (id)response;
- (id)title;

@end
