
@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction {
    NSArray * _parameterNames;
    bool  _resolvesAllParameters;
}

@property (nonatomic, readonly) NSArray *parameterNames;
@property (nonatomic, readonly) bool resolvesAllParameters;

+ (Class)responseClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_completionHandlerForMultipleParametersWithActionCompletionHandler:(id /* block */)arg1;
- (id /* block */)_completionHandlerForSingleParameterNamed:(id)arg1 withActionCompletionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2;
- (id)initWithIntent:(id)arg1 parameterNames:(id)arg2;
- (id)parameterNames;
- (bool)resolvesAllParameters;

@end
