
@protocol HKDataFlowLinkProcessor <NSObject>

@optional

- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddDestination:(HKDataFlowLink *)arg2 direct:(bool)arg3;
- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddSource:(HKDataFlowLink *)arg2 direct:(bool)arg3;

@end
