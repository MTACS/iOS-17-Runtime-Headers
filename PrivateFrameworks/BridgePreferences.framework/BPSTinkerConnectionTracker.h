
@interface BPSTinkerConnectionTracker : NSObject <PBBridgeIDSReachabilityObserver> {
    <BPSTinkerConnectionTrackerDelegate> * _delegate;
    PBBridgeIDSReachability * _reachability;
    NRDevice * _selectedDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BPSTinkerConnectionTrackerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NRDevice *selectedDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithDevice:(id)arg1;
- (void)reachability:(id)arg1 device:(id)arg2 connectionStatus:(unsigned long long)arg3;
- (id)selectedDevice;
- (void)setDelegate:(id)arg1;
- (void)setSelectedDevice:(id)arg1;

@end
