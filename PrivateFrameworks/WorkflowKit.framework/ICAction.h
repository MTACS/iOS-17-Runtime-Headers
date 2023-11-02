
@interface ICAction : NSObject {
    ICApp * _app;
    NSDictionary * _definition;
    NSArray * _inputContentClasses;
    NSArray * _inputMapping;
    NSArray * _outputContentClasses;
    NSArray * _outputMapping;
}

@property (nonatomic, readonly) ICApp *app;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) bool createsWFAction;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSDictionary *descriptionDictionary;
@property (getter=isDiscontinued, nonatomic, readonly) bool discontinued;
@property (getter=isDiscoverable, nonatomic, readonly) bool discoverable;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *inputContentClasses;
@property (nonatomic, readonly) NSArray *inputMapping;
@property (nonatomic, readonly) NSString *inputParameterSourceKey;
@property (nonatomic, readonly) bool inputRequired;
@property (nonatomic, readonly) bool inputsMultipleItems;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool neverSuggested;
@property (nonatomic, readonly) NSArray *outputContentClasses;
@property (nonatomic, readonly) NSArray *outputMapping;
@property (nonatomic, readonly) bool outputsMultipleItems;
@property (nonatomic, readonly) id parameterSummaryDefinition;
@property (nonatomic, readonly) NSArray *requiredResourceNames;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) bool skipItemClassesSupportingInput;
@property (nonatomic, readonly) NSString *subcategory;
@property (nonatomic, readonly) NSString *wfActionClassName;

- (void).cxx_destruct;
- (id)app;
- (id)capabilities;
- (id)category;
- (bool)createsWFAction;
- (id)creationDate;
- (id)definition;
- (id)description;
- (id)descriptionDictionary;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;
- (id)inputContentClasses;
- (id)inputMapping;
- (id)inputParameterSourceKey;
- (bool)inputRequired;
- (bool)inputsMultipleItems;
- (bool)isDiscontinued;
- (bool)isDiscoverable;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)lastModifiedDate;
- (id)name;
- (bool)neverSuggested;
- (id)outputContentClasses;
- (id)outputMapping;
- (bool)outputsMultipleItems;
- (id)parameterSummaryDefinition;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (void)processInput:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)requiredResourceNames;
- (id)shortName;
- (bool)skipItemClassesSupportingInput;
- (id)subcategory;
- (id)wfActionClassName;

@end
