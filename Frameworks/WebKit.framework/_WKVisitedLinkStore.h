
@interface _WKVisitedLinkStore : NSObject <WKObject> {
    struct ObjectStorage<WebKit::VisitedLinkStore> { 
        struct type { 
            unsigned char __lx[152]; 
        } data; 
    }  _visitedLinkStore;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)addVisitedLinkWithString:(id)arg1;
- (void)addVisitedLinkWithURL:(id)arg1;
- (bool)containsVisitedLinkWithURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeAll;
- (void)removeVisitedLinkWithURL:(id)arg1;

@end
