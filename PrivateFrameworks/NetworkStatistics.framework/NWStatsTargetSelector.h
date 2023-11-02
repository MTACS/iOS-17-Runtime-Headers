
@interface NWStatsTargetSelector : NSObject {
    unsigned long long  _connFilter;
    bool  _connHasNetAccess;
    unsigned long long  _events;
    bool  _explicitChannelsValue;
    bool  _explicitQUICValue;
    bool  _explicitSocketsValue;
    bool  _explicitTCPValue;
    bool  _explicitUDPSubFlowsValue;
    bool  _explicitUDPValue;
    bool  _explicitUserlandConnectionsValue;
    unsigned long long  _filter;
    bool  _hasExplicitChannels;
    bool  _hasExplicitQUIC;
    bool  _hasExplicitSockets;
    bool  _hasExplicitTCP;
    bool  _hasExplicitUDP;
    bool  _hasExplicitUDPSubFlows;
    bool  _hasExplicitUserlandConnections;
    NSDictionary * _suppliedParams;
}

@property unsigned long long connFilter;
@property unsigned long long events;
@property unsigned long long filter;
@property (retain) NSDictionary *suppliedParams;

- (void).cxx_destruct;
- (bool)_applySelection:(id)arg1;
- (unsigned long long)connFilter;
- (id)description;
- (unsigned long long)events;
- (unsigned long long)filter;
- (id)initWithMultipleSelections:(id)arg1;
- (id)initWithSelection:(id)arg1;
- (void)setConnFilter:(unsigned long long)arg1;
- (void)setEvents:(unsigned long long)arg1;
- (void)setFilter:(unsigned long long)arg1;
- (void)setSuppliedParams:(id)arg1;
- (bool)shouldAddProvider:(int)arg1;
- (id)suppliedParams;

@end
