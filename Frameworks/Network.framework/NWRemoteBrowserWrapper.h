
@interface NWRemoteBrowserWrapper : NSObject {
    NWBrowser * _browser;
    NSUUID * _clientID;
}

@property (retain) NWBrowser *browser;
@property (retain) NSUUID *clientID;

- (void).cxx_destruct;
- (id)browser;
- (id)clientID;
- (void)setBrowser:(id)arg1;
- (void)setClientID:(id)arg1;

@end
