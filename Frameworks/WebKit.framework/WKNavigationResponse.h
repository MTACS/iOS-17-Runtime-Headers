
@interface WKNavigationResponse : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationResponse> { 
        struct type { 
            unsigned char __lx[496]; 
        } data; 
    }  _navigationResponse;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) NSString *_downloadAttribute;
@property (nonatomic, readonly) WKFrameInfo *_frame;
@property (nonatomic, readonly) NSURLRequest *_request;
@property (nonatomic, readonly) NSString *_sf_explicitSuggestedFilename;
@property (nonatomic, readonly) NSString *_sf_suggestedFilename;
@property (nonatomic, readonly) bool canShowMIMEType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForMainFrame, nonatomic, readonly) bool forMainFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURLResponse *response;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_downloadAttribute;
- (id)_frame;
- (id)_request;
- (bool)canShowMIMEType;
- (void)dealloc;
- (id)description;
- (bool)isForMainFrame;
- (id)response;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)_sf_allowReloadingInMainFrame;
- (id)_sf_explicitSuggestedFilename;
- (long long)_sf_responsePolicy:(long long*)arg1 uti:(id*)arg2;
- (id)_sf_suggestedFilename;

@end
