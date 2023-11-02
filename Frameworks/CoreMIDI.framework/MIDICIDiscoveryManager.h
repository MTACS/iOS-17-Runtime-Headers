
@interface MIDICIDiscoveryManager : NSObject {
    unsigned int  _mClient;
    id /* block */  _mResponseBlock;
}

@property (nonatomic, copy) id /* block */ responseBlock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)createClient;
- (void)dealloc;
- (void)debugPrintMessage;
- (void)discover;
- (void)discoverWithHandler:(id /* block */)arg1;
- (id)handleNotification:(const struct MIDINotification { int x1; unsigned int x2; }*)arg1;
- (id /* block */)responseBlock;
- (void)setResponseBlock:(id /* block */)arg1;
- (int)setupManager;

@end
