
@interface _WKContentRuleListAction : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleListAction> { 
        struct type { 
            unsigned char __lx[40]; 
        } data; 
    }  _action;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) bool blockedCookies;
@property (nonatomic, readonly) bool blockedLoad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool madeHTTPS;
@property (nonatomic, readonly) bool modifiedHeaders;
@property (nonatomic, readonly, copy) NSArray *notifications;
@property (nonatomic, readonly) bool redirected;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (bool)blockedCookies;
- (bool)blockedLoad;
- (void)dealloc;
- (bool)madeHTTPS;
- (bool)modifiedHeaders;
- (id)notifications;
- (bool)redirected;

@end
