
@protocol SWURLSchemeHandler <NSObject>

@required

- (void)cancel;
- (void)finish;
- (void)start;
- (<WKURLSchemeTask> *)task;

@end
