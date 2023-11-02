
@interface WFOverridableLinkAction : WFLinkAction

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSDictionary *overrideDefaultValuesByParameter;
@property (nonatomic, readonly) NSString *overrideDescriptionSummary;
@property (nonatomic, readonly) NSDictionary *overrideLabelsByParameter;
@property (nonatomic, readonly) NSString *overrideName;
@property (nonatomic, readonly) WFActionParameterSummary *overrideParameterSummary;
@property (nonatomic, readonly) NSDictionary *parameterOverrides;
@property (nonatomic, readonly) NSDictionary *serializationKeysByParameter;
@property (nonatomic, readonly) bool shouldOverrideDescription;
@property (nonatomic, readonly) bool shouldOverrideName;
@property (nonatomic, readonly) bool shouldOverrideParameterLabels;
@property (nonatomic, readonly) bool shouldOverrideParameterSummary;
@property (nonatomic, readonly) bool shouldOverrideSubcategory;

+ (id)inputParameterMetadataWithActionMetadata:(id)arg1;
+ (id)overrideInputParameterName;
+ (id)overrideInputParameterNames;

- (id)appName;
- (id)descriptionSummary;
- (bool)isPlatformProvidedUnderstandingAction;
- (id)name;
- (id)overrideDefaultValuesByParameter;
- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (id)overrideParameterSummary;
- (id)parameterDefinitions;
- (id)parameterOverrides;
- (id)parameterSummary;
- (id)serializationKeysByParameter;
- (bool)shouldLocalizeValueForSelector:(SEL)arg1;
- (bool)shouldOverrideDescription;
- (bool)shouldOverrideName;
- (bool)shouldOverrideParameterLabels;
- (bool)shouldOverrideParameterSummary;
- (bool)shouldOverrideSubcategory;

@end
