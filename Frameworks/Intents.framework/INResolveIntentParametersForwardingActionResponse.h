
@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse {
    NSDictionary * _parameterResolutionResults;
    bool  _success;
    INIntent * _updatedIntent;
}

@property (nonatomic, readonly) NSDictionary *parameterResolutionResults;
@property (getter=isSuccess, nonatomic, readonly) bool success;
@property (nonatomic, readonly) INIntent *updatedIntent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(bool)arg1 updatedIntent:(id)arg2 parameterResolutionResults:(id)arg3 error:(id)arg4;
- (bool)isSuccess;
- (id)parameterResolutionResults;
- (id)updatedIntent;

@end
