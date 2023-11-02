
@interface INGetIntentParameterOptionsForwardingAction : INIntentForwardingAction {
    NSString * _parameterName;
    NSString * _searchTerm;
}

@property (nonatomic, readonly) NSString *parameterName;
@property (nonatomic, readonly) NSString *searchTerm;

+ (Class)responseClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2 searchTerm:(id)arg3;
- (id)parameterName;
- (id)searchTerm;

@end
