
@interface WKFrameInfo : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::FrameInfo> { 
        struct type { 
            unsigned char __lx[328]; 
        } data; 
    }  _frameInfo;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) _WKFrameHandle *_handle;
@property (nonatomic, readonly) bool _isLocalFrame;
@property (nonatomic, readonly, copy) _WKFrameHandle *_parentFrameHandle;
@property (nonatomic, readonly) int _processIdentifier;
@property (nonatomic, readonly, copy) NSString *_sf_titleForJavaScriptDialog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMainFrame, nonatomic, readonly) bool mainFrame;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (nonatomic, readonly) WKSecurityOrigin *securityOrigin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_handle;
- (bool)_isLocalFrame;
- (id)_parentFrameHandle;
- (int)_processIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)isMainFrame;
- (id)request;
- (id)securityOrigin;
- (id)webView;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_titleForJavaScriptDialog;

@end
