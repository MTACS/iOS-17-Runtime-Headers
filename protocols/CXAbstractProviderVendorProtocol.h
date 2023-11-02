
@protocol CXAbstractProviderVendorProtocol <NSObject>

@required

- (oneway void)commitTransaction:(CXTransaction *)arg1;
- (oneway void)handleActionTimeout:(CXAction *)arg1;

@end
