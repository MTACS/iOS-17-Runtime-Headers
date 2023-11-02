
@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction {
    NSString * _parameterName;
}

@property (nonatomic, readonly, copy) NSString *parameterName;

+ (Class)responseClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2;
- (id)parameterName;

@end
