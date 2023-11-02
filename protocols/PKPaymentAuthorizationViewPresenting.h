
@protocol PKPaymentAuthorizationViewPresenting <NSObject>

@required

+ (void)presentCell:(void *)arg1 withDataItem:(void *)arg2 shouldShowSeperator:(void *)arg3 forPaymentRequest:(void *)arg4 cellProvider:(void *)arg5; // needs 5 arg types, found 9: UITableViewCell *, PKPaymentDataItem *, bool, PKPaymentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UITableViewCell *, id /* block */, void*

@optional

+ (void)presentView:(UIView *)arg1 withDataItem:(PKPaymentDataItem *)arg2 forPaymentRequest:(PKPaymentRequest *)arg3;

@end
