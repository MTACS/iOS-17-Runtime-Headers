
@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion {
    HMDAccessoryBrowser * _accessoryBrowser;
}

@property (readonly) HMDAccessoryBrowser *accessoryBrowser;

- (void).cxx_destruct;
- (id)accessoryBrowser;
- (id)initWithAccessoryBrowser:(id)arg1 reason:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)invalidate;

@end
