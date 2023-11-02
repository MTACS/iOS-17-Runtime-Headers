
@interface AVServerWrapper : NSObject {
    AVHapticServerInstance * _serverInstance;
}

@property (readonly) AVHapticServerInstance *serverInstance;

- (void).cxx_destruct;
- (bool)contains:(id)arg1;
- (id)initWithServerInstance:(id)arg1;
- (id)serverInstance;

@end
