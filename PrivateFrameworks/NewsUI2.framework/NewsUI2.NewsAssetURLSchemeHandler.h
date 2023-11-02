
@interface NewsUI2.NewsAssetURLSchemeHandler : NSObject <SWURLSchemeHandler> {
    void assetFetchService;
    void cancelHandler;
    void resourceIdentifier;
    void task;
}

@property (nonatomic, readonly) <WKURLSchemeTask> *task;

- (void).cxx_destruct;
- (void)cancel;
- (void)finish;
- (id)init;
- (void)start;
- (id)task;

@end
