
@interface PXViewCountAnalyticsDestination : NSObject <CPAnalyticsDestinationProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)processEvent:(id)arg1;

@end
