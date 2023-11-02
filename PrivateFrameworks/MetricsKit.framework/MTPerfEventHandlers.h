
@interface MTPerfEventHandlers : MTEventHandlers {
    MTFlexiblePerfEventHandler * _flexible;
}

@property (nonatomic, readonly) MTFlexiblePerfEventHandler *flexible;
@property (nonatomic, readonly) MTLoadUrlEventHandler *loadUrl;
@property (nonatomic, readonly) MTPageRenderEventHandler *pageRender;

- (void).cxx_destruct;
- (Class)baseDataProviderClass;
- (id)flexible;
- (id)loadUrl;
- (id)pageRender;
- (void)registerDefaultEventHandlers;

@end
