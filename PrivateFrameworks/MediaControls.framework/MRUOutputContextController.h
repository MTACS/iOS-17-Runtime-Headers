
@interface MRUOutputContextController : NSObject {
    <MRUOutputContextControllerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    AVOutputContext * _outputContext;
    long long  _outputContextType;
}

@property (nonatomic) <MRUOutputContextControllerDelegate> *delegate;
@property (nonatomic, readonly) AVOutputContext *outputContext;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;

- (void).cxx_destruct;
- (void)_setOutputDevice:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)associatedOutputContext;
- (id)delegate;
- (id)initWithOutputContextType:(long long)arg1;
- (void)initializeOutputContextWithCompletion:(id /* block */)arg1;
- (void)mediaServicesWereLostNotification:(id)arg1;
- (void)mediaServicesWereResetNotification:(id)arg1;
- (id)outputContext;
- (id)outputDevice;
- (void)outputDeviceChangedNotification:(id)arg1;
- (void)registerNotificationsForOutputContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOutputContext:(id)arg1;
- (void)setOutputDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterNotificationsForOutputContext:(id)arg1;

@end
