
@interface JETreatmentAction : NSObject {
    bool  _blacklisted;
    NSArray * _blacklistedFields;
    NSArray * _destinationKeyPath;
    NSDictionary * _extractAndReplaceConfig;
    NSString * _field;
    NSDictionary * _fieldsMap;
    id  _overrideFieldValue;
    NSString * _sourceField;
    NSArray * _sourceKeyPath;
    NSArray * _whitelistedFields;
}

+ (id)treatmentActionWithField:(id)arg1 configuration:(id)arg2 topic:(id)arg3;

- (void).cxx_destruct;
- (id)initWithField:(id)arg1 configuration:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;
- (void)performActionWithContext:(id)arg1;

@end
