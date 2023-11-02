
@interface _WKFrameTreeNode : WKFrameInfo <WKObject> {
    struct ObjectStorage<API::FrameTreeNode> { 
        struct type { 
            unsigned char __lx[344]; 
        } data; 
    }  _node;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) NSArray *childFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) WKFrameInfo *info;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_handle;
- (bool)_isLocalFrame;
- (id)_parentFrameHandle;
- (int)_processIdentifier;
- (id)childFrames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)info;
- (bool)isMainFrame;
- (id)request;
- (id)securityOrigin;
- (id)webView;

@end
