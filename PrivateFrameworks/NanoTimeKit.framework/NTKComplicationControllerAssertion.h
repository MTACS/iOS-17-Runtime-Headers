
@interface NTKComplicationControllerAssertion : NSObject {
    NTKComplicationController * _controller;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _lock_dataMode;
    bool  _lock_invalidated;
}

@property (nonatomic, readonly) NTKComplicationController *controller;
@property (nonatomic) long long dataMode;
@property (nonatomic, readonly) bool invalidated;

- (void).cxx_destruct;
- (id)controller;
- (long long)dataMode;
- (void)dealloc;
- (id)initWithController:(id)arg1 dataMode:(long long)arg2;
- (void)invalidate;
- (bool)invalidated;
- (void)setDataMode:(long long)arg1;

@end
