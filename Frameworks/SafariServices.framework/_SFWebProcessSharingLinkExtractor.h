
@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor> {
    _SFWebProcessPlugInPageController * _pageController;
    _WKRemoteObjectInterface * _sharingLinkExtractorInterface;
}

- (void).cxx_destruct;
- (id)_extractCanonicalLinkWithInjectedObject:(id)arg1;
- (id)_extractDominantIFrameWithInjectedObject:(id)arg1;
- (id)_extractSharingLink;
- (id)_injectedLinkExtractorSourceString;
- (void)_setUpRemoteInterface;
- (void)_withInjectedLinkExtractorObjectInFrame:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)arg1;
- (id)initWithPageController:(id)arg1;

@end
