
@interface PSUIDeviceWiFiState : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (bool)isConnectedOverWiFi;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
