
@interface SWWebViewFactory : NSObject <SWWebViewFactory> {
    NSPointerArray * _webViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSPointerArray *webViews;

- (void).cxx_destruct;
- (void)assignRelatedWebViewToConfiguration:(id)arg1;
- (id)createWebViewWithWebViewConfiguration:(id)arg1 scrollSettings:(id)arg2;
- (id)init;
- (id)webViews;

@end
