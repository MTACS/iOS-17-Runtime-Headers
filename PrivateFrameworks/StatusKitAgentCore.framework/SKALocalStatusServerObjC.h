
@interface SKALocalStatusServerObjC : NSObject {
    SKALocalStatusServer * _server;
}

@property (nonatomic, retain) SKALocalStatusServer *server;

- (void).cxx_destruct;
- (id)initWithIDSDeviceProvider:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (void)shutdown;

@end
