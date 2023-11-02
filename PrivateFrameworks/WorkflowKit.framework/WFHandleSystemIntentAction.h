
@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource> {
    INIntentDescription * _intentDescription;
    INIntentDescriptor * _intentDescriptor;
    NSSet * _launchableIdentifiers;
    NSArray * _supportedAppIdentifiers;
    NSSet * _supportedIdentifiers;
    int  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INIntentDescriptor *intentDescriptor;
@property (nonatomic, readonly) NSSet *launchableIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *supportedIdentifiers;
@property (nonatomic, readonly) int token;

+ (id)sharedEnumerator;

- (void).cxx_destruct;
- (id)accessoryIcon;
- (id)actionForAppIdentifier:(id)arg1;
- (id)appSection;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)customAppNameForBundleIdentifier:(id)arg1;
- (id)customImageForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)displayableAppIdentifier;
- (id)enumeration:(id)arg1 accessoryImageForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4;
- (id)icon;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 stringLocalizer:(id)arg4;
- (void)initializeParameters;
- (long long)intentCategory;
- (id)intentClassName;
- (id)intentDescription;
- (id)intentDescriptor;
- (id)intentDescriptorFromParameterState;
- (id)intentDescriptorWithIntentClassName:(id)arg1 launchableBundleId:(id)arg2;
- (id)launchableAppIdentifier;
- (id)launchableAppIdentifiers;
- (id)launchableIdentifiers;
- (id)localizedAppName;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)selectedAppDidChange;
- (id)selectedAppNotSupportedError;
- (void)setIntentDescriptor:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (bool)shouldBeIncludedInAppsList;
- (id)slots;
- (id)supportedAppIdentifiers;
- (id)supportedIdentifiers;
- (int)token;

@end
