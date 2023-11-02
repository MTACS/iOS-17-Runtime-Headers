
@interface _DPNamespaceParameters : NSObject {
    NSArray * _allowedDataTypes;
    _DPPrivacyBudget * _budget;
}

@property (nonatomic, retain) NSArray *allowedDataTypes;
@property (nonatomic, readonly) _DPPrivacyBudget *budget;

+ (id)allNamespaceNames;
+ (id)initParametersForNamespace:(id)arg1;
+ (id)namespaceParametersFromDictionary:(id)arg1;
+ (id)parametersFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)allowedDataTypes;
- (id)budget;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setAllowedDataTypes:(id)arg1;

@end
