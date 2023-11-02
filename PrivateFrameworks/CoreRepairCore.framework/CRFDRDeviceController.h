
@interface CRFDRDeviceController : NSObject {
    CRFDRBaseDeviceHandler * handler;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)_init;
- (id)getHandlerForDevice;
- (id)init;

@end
