
@interface WFRemoteWidgetConfigurationRequest : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    INIntent * _intent;
    LNActionParameterMetadata * _parameterMetadata;
    NSString * _parameterName;
    long long  _requestType;
    NSString * _searchTerm;
    NSDictionary * _serializedParameters;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) LNActionParameterMetadata *parameterMetadata;
@property (nonatomic, readonly) NSString *parameterName;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) Class responseClass;
@property (nonatomic, readonly) NSString *searchTerm;
@property (nonatomic, readonly) NSDictionary *serializedParameters;

+ (id)defaultLNOptionForParameterRequestWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2 parameterName:(id)arg3;
+ (id)fromSecureData:(id)arg1;
+ (id)lnActionMetadataRequestWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2;
+ (id)lnOptionsForParameterRequesttWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2 parameterName:(id)arg3 searchTerm:(id)arg4;
+ (id)localizedIntentRequestWithIntent:(id)arg1;
+ (id)optionsForParameterRequestWithIntent:(id)arg1 parameterName:(id)arg2 searchTerm:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestType:(long long)arg1 intent:(id)arg2 actionIdentifier:(id)arg3 serializedParameters:(id)arg4 parameterName:(id)arg5 searchTerm:(id)arg6;
- (id)intent;
- (id)parameterMetadata;
- (id)parameterName;
- (long long)requestType;
- (id)requestTypeDescription;
- (Class)responseClass;
- (id)searchTerm;
- (id)secureData;
- (id)serializedParameters;

@end
