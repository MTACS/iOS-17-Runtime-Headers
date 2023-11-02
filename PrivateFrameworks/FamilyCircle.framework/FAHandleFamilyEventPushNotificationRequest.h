
@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest {
    NSDictionary * _payload;
}

@property (readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1;
- (id)payload;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
