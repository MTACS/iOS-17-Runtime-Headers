
@interface PKPaymentCardViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_billingValueInCell:(id)arg1 forItem:(id)arg2 type:(unsigned long long)arg3;
+ (void)presentCell:(id)arg1 withDataItem:(id)arg2 shouldShowSeperator:(bool)arg3 forPaymentRequest:(id)arg4 cellProvider:(id /* block */)arg5;

@end
