
@interface NewsUI2.NewsWebArchiveURLSchemeHandler : NSObject <SWURLSchemeHandler> {
    void task;
    void webArchiveService;
}

@property (nonatomic, readonly) <WKURLSchemeTask> *task;

- (void).cxx_destruct;
- (void)cancel;
- (void)finish;
- (id)init;
- (void)start;
- (id)task;

@end
