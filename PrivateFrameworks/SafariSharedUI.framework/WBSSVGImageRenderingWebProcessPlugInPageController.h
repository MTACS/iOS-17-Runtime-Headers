
@interface WBSSVGImageRenderingWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    <WBSSVGImageRenderingObserver> * _svgImageRenderingObserver;
}

- (void).cxx_destruct;
- (id)svgImageRenderingObserver;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end
