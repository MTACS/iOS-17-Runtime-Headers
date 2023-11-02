
@interface INConfirmIntentForwardingActionResponse : INIntentForwardingActionResponse {
    NSSet * _cacheItems;
    INIntentResponse * _intentResponse;
    NSData * _launchContextActivityData;
}

@property (nonatomic, readonly) NSSet *cacheItems;
@property (nonatomic, readonly) INIntentResponse *intentResponse;
@property (nonatomic, readonly) NSData *launchContextActivityData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntentResponse:(id)arg1 launchContextActivityData:(id)arg2 cacheItems:(id)arg3 error:(id)arg4;
- (id)intentResponse;
- (id)launchContextActivityData;

@end
