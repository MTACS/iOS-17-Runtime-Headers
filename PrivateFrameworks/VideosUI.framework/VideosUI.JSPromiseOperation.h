
@interface VideosUI.JSPromiseOperation : VUIJSObject <VideosUI.JSPromiseOperationInterface> {
    void loadImmediately;
}

@property (nonatomic) bool loadImmediately;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithAppContext:(id)arg1;
- (id)initWithPromiseFunction:(id)arg1 cancelFunction:(id)arg2;
- (bool)loadImmediately;
- (void)setLoadImmediately:(bool)arg1;

@end
