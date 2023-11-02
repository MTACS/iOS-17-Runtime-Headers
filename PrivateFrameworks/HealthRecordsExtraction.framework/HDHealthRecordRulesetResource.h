
@interface HDHealthRecordRulesetResource : NSObject {
    NSArray * _APIReferenceRules;
    HDHealthRecordClinicalType * _clinicalType;
    HDHRConditionRule * _condition;
    NSArray * _containReferences;
    NSArray * _displayNameKeyPaths;
    NSDictionary * _medicalRecordProperties;
    NSDictionary * _redactionRules;
    NSString * _resourceName;
    NSString * _resourceType;
    NSArray * _retrieveReferences;
}

@property (nonatomic, readonly, copy) NSArray *APIReferenceRules;
@property (nonatomic, readonly, copy) HDHealthRecordClinicalType *clinicalType;
@property (nonatomic, readonly, copy) HDHRConditionRule *condition;
@property (nonatomic, readonly, copy) NSArray *containReferences;
@property (nonatomic, readonly, copy) NSArray *displayNameKeyPaths;
@property (nonatomic, readonly, copy) NSDictionary *medicalRecordProperties;
@property (nonatomic, readonly, copy) NSDictionary *redactionRules;
@property (nonatomic, readonly, copy) NSString *resourceName;
@property (nonatomic, readonly, copy) NSString *resourceType;
@property (nonatomic, readonly, copy) NSArray *retrieveReferences;

+ (id)resourceFromDictionary:(id)arg1 resourceName:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)APIReferenceRules;
- (id)clinicalType;
- (id)condition;
- (id)containReferences;
- (id)displayNameKeyPaths;
- (bool)evaluateWithObject:(id)arg1;
- (id)medicalRecordProperties;
- (id)redactionRules;
- (id)resourceName;
- (id)resourceType;
- (id)retrieveReferences;

@end
