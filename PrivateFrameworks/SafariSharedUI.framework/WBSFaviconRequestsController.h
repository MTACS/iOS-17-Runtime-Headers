
@interface WBSFaviconRequestsController : NSObject {
    WBSSiteMetadataManager * _manager;
    long long  _priority;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSMapTable * _tokenToRequestToken;
}

@property (nonatomic, readonly) WBSSiteMetadataManager *manager;
@property (nonatomic) long long priority;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (void)_issueRequest:(id)arg1 isOneTime:(bool)arg2 withToken:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelAllRegistrations;
- (void)cancelAllRegistrationsWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithSiteMetadataManager:(id)arg1;
- (id)manager;
- (long long)priority;
- (void)registerOneTimeRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(bool)arg3 iconSize:(struct CGSize { double x1; double x2; })arg4 isURLTypedByUser:(bool)arg5 completion:(id /* block */)arg6;
- (void)registerRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(bool)arg3 iconSize:(struct CGSize { double x1; double x2; })arg4 isURLTypedByUser:(bool)arg5 completion:(id /* block */)arg6;
- (void)setPriority:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
