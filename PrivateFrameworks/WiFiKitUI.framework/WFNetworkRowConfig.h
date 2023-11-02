
@interface WFNetworkRowConfig : NSObject {
    long long  _connectionState;
    unsigned long long  _context;
    bool  _hideConnectionState;
    id /* block */  _infoButtonHandler;
    <WFNetworkListRecord> * _network;
    bool  _problematicConnection;
    bool  _showInfoButton;
    unsigned long long  _signalBars;
    NSString * _subtitle;
}

@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned long long context;
@property (nonatomic) bool hideConnectionState;
@property (copy) id /* block */ infoButtonHandler;
@property (nonatomic, retain) <WFNetworkListRecord> *network;
@property (nonatomic) bool problematicConnection;
@property (nonatomic) bool showInfoButton;
@property (nonatomic) unsigned long long signalBars;
@property (nonatomic, copy) NSString *subtitle;

+ (id)knownNetworkRowConfig;
+ (id)settingsNetworkRowConfig;
+ (id)setupNetworkRowConfig;

- (void).cxx_destruct;
- (long long)connectionState;
- (unsigned long long)context;
- (bool)hideConnectionState;
- (id /* block */)infoButtonHandler;
- (id)init;
- (id)network;
- (bool)problematicConnection;
- (void)setConnectionState:(long long)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setHideConnectionState:(bool)arg1;
- (void)setInfoButtonHandler:(id /* block */)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProblematicConnection:(bool)arg1;
- (void)setShowInfoButton:(bool)arg1;
- (void)setSignalBars:(unsigned long long)arg1;
- (void)setSubtitle:(id)arg1;
- (bool)showInfoButton;
- (unsigned long long)signalBars;
- (id)subtitle;

@end
