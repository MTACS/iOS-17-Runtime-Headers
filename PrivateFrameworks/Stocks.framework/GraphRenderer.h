
@interface GraphRenderer : NSObject {
    bool  _cancelled;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)clearSharedRenderer;
+ (id)sharedRenderer;

- (void).cxx_destruct;
- (id)init;
- (void)performRenderOperation:(id)arg1;

@end
