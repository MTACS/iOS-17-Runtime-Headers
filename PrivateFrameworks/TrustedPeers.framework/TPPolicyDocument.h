
@interface TPPolicyDocument : NSObject {
    NSData * _protobuf;
    TPPolicyVersion * _version;
}

@property (readonly) NSArray *keyViewMapping;
@property (nonatomic, readonly) NSData *protobuf;
@property (nonatomic, readonly) TPPolicyVersion *version;

+ (void)addCategoriesByView:(id)arg1 toPB:(id)arg2;
+ (void)addIntroducersByCategory:(id)arg1 toPB:(id)arg2;
+ (void)addKeyViewMapping:(id)arg1 toPB:(id)arg2;
+ (void)addModelToCategory:(id)arg1 toPB:(id)arg2;
+ (void)addRedactions:(id)arg1 toPB:(id)arg2;
+ (id)categoriesByViewFromPb:(id)arg1;
+ (id)introducersByCategoryFromPb:(id)arg1;
+ (bool)isEqualKeyViewMapping:(id)arg1 other:(id)arg2;
+ (id)modelToCategoryFromPb:(id)arg1;
+ (id)policyDocWithHash:(id)arg1 data:(id)arg2;
+ (id)redactionWithEncrypter:(id)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 keyViewMapping:(id)arg5 error:(id*)arg6;
+ (id)redactionsFromPb:(id)arg1;

- (void).cxx_destruct;
- (id)cloneWithVersionNumber:(unsigned long long)arg1;
- (id)cloneWithVersionNumber:(unsigned long long)arg1 prependingCategoriesByView:(id)arg2 prependingKeyViewMapping:(id)arg3;
- (id)description;
- (id)encodeProtobuf;
- (unsigned long long)hash;
- (id)initWithHash:(id)arg1 data:(id)arg2;
- (id)initWithVersion:(unsigned long long)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 userControllableViewList:(id)arg7 piggybackViews:(id)arg8 priorityViews:(id)arg9 inheritedExcludedViews:(id)arg10 hashAlgo:(long long)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPolicyDocument:(id)arg1;
- (id)keyViewMapping;
- (id)policyWithSecrets:(id)arg1 decrypter:(id)arg2 error:(id*)arg3;
- (id)protobuf;
- (id)version;

@end
