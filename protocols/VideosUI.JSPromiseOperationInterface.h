
@protocol VideosUI.JSPromiseOperationInterface <JSExport>

@required

- (id)initWithPromiseFunction:(JSValue *)arg1 cancelFunction:(JSValue *)arg2;
- (bool)loadImmediately;
- (void)setLoadImmediately:(bool)arg1;

@end
