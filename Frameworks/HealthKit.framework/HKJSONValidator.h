
@interface HKJSONValidator : NSObject {
    <NSCopying> * _schema;
    NSMutableDictionary * _subschemaCache;
}

@property (nonatomic, readonly, copy) <NSCopying> *schema;

+ (void)registerSearchPath:(id)arg1;
+ (id)searchPaths;
+ (bool)validateJSONObject:(id)arg1 withSchemaNamed:(id)arg2 bundle:(id)arg3 error:(out id*)arg4;

- (void).cxx_destruct;
- (id)_loadSubschemaNamed:(id)arg1;
- (id)_mismatchErrorFromKeyStack:(id)arg1;
- (bool)_validateArray:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (bool)_validateBoolean:(id)arg1;
- (bool)_validateDictionary:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (bool)_validateFingerprintSHA256:(id)arg1;
- (bool)_validateJSONObject:(id)arg1 keyStack:(id)arg2;
- (bool)_validatePrimitive:(id)arg1 schema:(id)arg2 keyStack:(id)arg3;
- (bool)_validateTimezone:(id)arg1;
- (bool)_validateURL:(id)arg1;
- (bool)_validateValue:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 root:(bool)arg4;
- (bool)_validateValue:(id)arg1 subschemaNamed:(id)arg2 keyStack:(id)arg3;
- (id)init;
- (id)initWithSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 subschemaCache:(id)arg2;
- (id)initWithSchemaNamed:(id)arg1 bundle:(id)arg2;
- (id)schema;
- (bool)validateJSONObject:(id)arg1 error:(out id*)arg2;

@end
