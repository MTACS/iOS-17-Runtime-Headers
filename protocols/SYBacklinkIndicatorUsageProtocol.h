
@protocol SYBacklinkIndicatorUsageProtocol <NSObject>

@required

- (oneway void)didActivateBacklinkItemWithIdentifier:(NSUUID *)arg1;
- (oneway void)didDismissBacklinkItemWithIdentifier:(NSUUID *)arg1;

@end
