
@interface _DPDataTypeParameters : NSObject {
    _DPPrivacyBudget * _budget;
    float  _localPrivacyBudget;
}

@property (nonatomic, readonly) _DPPrivacyBudget *budget;
@property (nonatomic, readonly) float localPrivacyBudget;

+ (id)allDataTypeNames;
+ (id)dataTypeParametersFromDictionary:(id)arg1;
+ (id)initParametersForDataType:(id)arg1;
+ (id)parametersFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)budget;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (float)localPrivacyBudget;

@end
