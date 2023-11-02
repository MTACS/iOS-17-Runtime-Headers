
@interface MTTreatmentAction : NSObject {
    NSArray * _allowlistedFields;
    bool  _denylisted;
    NSArray * _denylistedFields;
    NSArray * _dstKeyPath;
    NSString * _field;
    NSDictionary * _fieldsMap;
    id  _overrideFieldValue;
    NSString * _sourceField;
    NSArray * _srcKeyPath;
}

@property (nonatomic, retain) NSArray *allowlistedFields;
@property (nonatomic) bool denylisted;
@property (nonatomic, retain) NSArray *denylistedFields;
@property (nonatomic, retain) NSArray *dstKeyPath;
@property (nonatomic, retain) NSString *field;
@property (nonatomic, retain) NSDictionary *fieldsMap;
@property (nonatomic, retain) id overrideFieldValue;
@property (nonatomic, retain) NSString *sourceField;
@property (nonatomic, retain) NSArray *srcKeyPath;

+ (id)treatmentActionWithField:(id)arg1 configData:(id)arg2;

- (void).cxx_destruct;
- (id)allowlistedFields;
- (void)computeKeyPaths;
- (bool)denylisted;
- (id)denylistedFields;
- (id)dstKeyPath;
- (id)field;
- (id)fieldsMap;
- (id)initWithField:(id)arg1 configDictionary:(id)arg2;
- (id)overrideFieldValue;
- (id)performAction:(id)arg1 atKeyIndex:(long long)arg2 context:(id)arg3;
- (id)performAction:(id)arg1 context:(id)arg2;
- (void)performActionWithContext:(id)arg1;
- (void)setAllowlistedFields:(id)arg1;
- (void)setDenylisted:(bool)arg1;
- (void)setDenylistedFields:(id)arg1;
- (void)setDstKeyPath:(id)arg1;
- (void)setField:(id)arg1;
- (void)setFieldsMap:(id)arg1;
- (void)setOverrideFieldValue:(id)arg1;
- (void)setSourceField:(id)arg1;
- (void)setSrcKeyPath:(id)arg1;
- (id)sourceField;
- (id)srcKeyPath;

@end
