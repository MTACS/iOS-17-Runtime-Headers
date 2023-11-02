
@interface INUIAppIntentDeliverer : INAppIntentDeliverer

- (void)deliverIntent:(id)arg1 reply:(id /* block */)arg2;
- (void)deliverIntentForwardingActionWithResponseHandler:(id /* block */)arg1;

@end
