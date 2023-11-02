
@interface WFInterchangeAction : WFAction {
    INAppDescriptor * _appDescriptor;
    NSArray * _contentClasses;
    ICAction * _interchangeAction;
}

@property (nonatomic, retain) NSArray *contentClasses;
@property (nonatomic, readonly) ICAction *interchangeAction;
@property (nonatomic, readonly) bool requiresCallback;

- (void).cxx_destruct;
- (id)app;
- (id)appDescriptor;
- (bool)appResourceRequiresAppInstall;
- (bool)callbackIsCurrentlyDisabled;
- (id)categories;
- (id)contentClasses;
- (id)creationDate;
- (id)description;
- (id)descriptionDictionary;
- (id)disabledPlatformsForInterchangeActionWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)initWithInterchangeAction:(id)arg1 identifier:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4;
- (id)initWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (id)inputContentClasses;
- (id)inputParameterKey;
- (bool)inputPassthrough;
- (bool)inputRequired;
- (bool)inputsMultipleItems;
- (id)interchangeAction;
- (bool)isDiscontinued;
- (bool)isDiscoverable;
- (id)keywords;
- (id)lastModifiedDate;
- (bool)mappedValueIsTrue:(id)arg1 forContentMapping:(id)arg2;
- (id)name;
- (bool)neverSuggested;
- (id)outputContentClasses;
- (bool)outputsMultipleItems;
- (id)parameterSummary;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (id)requiredResources;
- (bool)requiresCallback;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setAppDescriptor:(id)arg1;
- (void)setContentClasses:(id)arg1;
- (id)shortName;
- (bool)shouldSuppressCallback;
- (bool)skipsProcessingHiddenParameters;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)subcategoryForCategory:(id)arg1;
- (id)userInterfaceTypes;

@end
