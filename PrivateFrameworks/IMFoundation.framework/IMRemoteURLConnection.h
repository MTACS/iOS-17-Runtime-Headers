
@interface IMRemoteURLConnection : NSObject {
    IMURLRequestSession * _URLSession;
    id /* block */  _block;
    NSString * _bundleIdentifierForDataUsage;
    bool  _cancelled;
    int  _concurrentConnections;
    bool  _disableKeepAlive;
    bool  _forceCellularIfPossible;
    int  _keepAliveCell;
    int  _keepAliveWifi;
    bool  _loading;
    NSURLRequest * _request;
    bool  _requireIDSHost;
    bool  _shouldReturnTimingData;
    bool  _shouldUsePipelining;
}

@property (nonatomic, retain) IMURLRequestSession *URLSession;
@property (copy) id /* block */ block;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property (nonatomic) bool cancelled;
@property int concurrentConnections;
@property bool disableKeepAlive;
@property bool forceCellularIfPossible;
@property int keepAliveCell;
@property int keepAliveWifi;
@property (nonatomic) bool loading;
@property (retain) NSURLRequest *request;
@property bool requireIDSHost;
@property bool shouldReturnTimingData;
@property bool shouldUsePipelining;

- (void).cxx_destruct;
- (id)URLSession;
- (void)_direct_cancel;
- (void)_direct_load;
- (id /* block */)block;
- (id)bundleIdentifierForDataUsage;
- (void)cancel;
- (bool)cancelled;
- (int)concurrentConnections;
- (void)dealloc;
- (bool)disableKeepAlive;
- (bool)forceCellularIfPossible;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(id /* block */)arg2;
- (int)keepAliveCell;
- (int)keepAliveWifi;
- (void)load;
- (bool)loading;
- (id)request;
- (bool)requireIDSHost;
- (void)setBlock:(id /* block */)arg1;
- (void)setBundleIdentifierForDataUsage:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setConcurrentConnections:(int)arg1;
- (void)setDisableKeepAlive:(bool)arg1;
- (void)setForceCellularIfPossible:(bool)arg1;
- (void)setKeepAliveCell:(int)arg1;
- (void)setKeepAliveWifi:(int)arg1;
- (void)setLoading:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequireIDSHost:(bool)arg1;
- (void)setShouldReturnTimingData:(bool)arg1;
- (void)setShouldUsePipelining:(bool)arg1;
- (void)setURLSession:(id)arg1;
- (bool)shouldReturnTimingData;
- (bool)shouldUsePipelining;

@end
