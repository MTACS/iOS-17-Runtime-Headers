
@interface VideosUI.JSMultiPartPromiseOperation : VUIJSObject <VideosUI.JSMultiPartPromiseOperationInterface> {
    void loadImmediately;
}

@property (nonatomic) bool loadImmediately;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithAppContext:(id)arg1;
- (id)initWithStart:(id)arg1 hasFragment:(id)arg2 getFragment:(id)arg3 cancel:(id)arg4;
- (bool)loadImmediately;
- (void)setLoadImmediately:(bool)arg1;

@end
