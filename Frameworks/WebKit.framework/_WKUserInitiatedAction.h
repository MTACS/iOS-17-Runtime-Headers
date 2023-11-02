
@interface _WKUserInitiatedAction : NSObject <WKObject> {
    struct ObjectStorage<API::UserInitiatedAction> { 
        struct type { 
            unsigned char __lx[64]; 
        } data; 
    }  _userInitiatedAction;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (getter=isConsumed, nonatomic, readonly) bool consumed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)consume;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isConsumed;

@end
