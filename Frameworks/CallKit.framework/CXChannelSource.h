
@interface CXChannelSource : CXAbstractProviderSource <CXChannelProviderVendorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXChannelSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;

@end
