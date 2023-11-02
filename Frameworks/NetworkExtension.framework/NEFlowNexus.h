
@interface NEFlowNexus : NENexus {
    NSMutableSet * _browseAssertions;
    NWRemoteConnectionDirector * _connectionDirector;
    NEFlowDivertFileHandle * _flowDivertControl;
    unsigned int  _flowDivertControlUnit;
    struct _NEFlowDirector { } * _flowDivertDirector;
    NSObject<OS_dispatch_queue> * _flowDivertQueue;
    NSData * _flowDivertTokenHMACKey;
    bool  _supportsBrowseRequests;
}

@property (nonatomic) bool supportsBrowseRequests;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAssertFromClient:(id)arg1;
- (void)handleUnassertFromClient:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (bool)setDiscoveredEndpoints:(id)arg1 forClient:(id)arg2;
- (void)setRemoteConnectionDirector:(id)arg1;
- (void)setSupportsBrowseRequests:(bool)arg1;
- (bool)supportsBrowseRequests;

@end
