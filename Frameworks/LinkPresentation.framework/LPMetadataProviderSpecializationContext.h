
@interface LPMetadataProviderSpecializationContext : NSObject {
    NSString * _MIMEType;
    NSURL * _URL;
    unsigned long long  _allowedSpecializations;
    LPEvent * _event;
    id /* block */  _eventGenerator;
    bool  _hasLoadedResource;
    NSURL * _postRedirectURL;
    bool  _shouldFetchSubresources;
    WKWebView * _webView;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) unsigned long long allowedSpecializations;
@property (nonatomic, retain) LPEvent *event;
@property (nonatomic, copy) id /* block */ eventGenerator;
@property (nonatomic, readonly) bool hasLoadedResource;
@property (nonatomic, readonly, copy) NSURL *postRedirectURL;
@property (nonatomic, readonly) bool shouldFetchSubresources;
@property (nonatomic, readonly, retain) WKWebView *webView;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (unsigned long long)allowedSpecializations;
- (void)ensureEventWithSpecialization:(unsigned long long)arg1;
- (id)event;
- (id /* block */)eventGenerator;
- (bool)hasLoadedResource;
- (id)initWithOriginalURL:(id)arg1 postRedirectURL:(id)arg2 MIMEType:(id)arg3 webView:(id)arg4 hasLoadedResource:(bool)arg5 shouldFetchSubresources:(bool)arg6 allowedSpecializations:(unsigned long long)arg7;
- (id)postRedirectURL;
- (void)setEvent:(id)arg1;
- (void)setEventGenerator:(id /* block */)arg1;
- (bool)shouldFetchSubresources;
- (id)webView;

@end
