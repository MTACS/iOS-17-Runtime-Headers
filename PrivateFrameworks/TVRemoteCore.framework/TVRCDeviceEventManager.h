
@interface TVRCDeviceEventManager : NSObject {
    TVRCDevice * _device;
    id /* block */  _eventResponseHandler;
}

@property (nonatomic, retain) TVRCDevice *device;
@property (nonatomic, copy) id /* block */ eventResponseHandler;

- (void).cxx_destruct;
- (id)device;
- (id /* block */)eventResponseHandler;
- (id)initWithDevice:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)sendEvent:(id)arg1 options:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)setEventResponseHandler:(id /* block */)arg1;

@end
