
@interface _ClientRenderer : NSObject {
    CDComplicationHostingView * _host;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _renderCost;
    double  _renderTime;
    NSObject<OS_dispatch_semaphore> * _sema;
}

- (void).cxx_destruct;
- (void)_handleRenderStatsTime:(double)arg1 cost:(double)arg2;
- (id)init;
- (void)renderWithViewData:(id)arg1 scale:(double)arg2 handler:(id /* block */)arg3;

@end
