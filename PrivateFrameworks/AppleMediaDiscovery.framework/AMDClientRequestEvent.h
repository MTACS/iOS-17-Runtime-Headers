
@interface AMDClientRequestEvent : NSObject {
    NSString * _CipherMLCallHandle;
    NSString * _CipherMLRequestError;
    NSArray * _PECSimilarityScoresArray;
    NSArray * _PIRDataArray;
    NSArray * _PIRKeywordArray;
    NSArray * _PIRMissingKeywordArray;
    NSString * _accountDSID;
    NSDictionary * _customDescriptor;
    NSString * _domain;
    NSString * _featureName;
    NSString * _modelId;
    NSString * _request;
    NSString * _schemaVersion;
    NSString * _storefrontId;
    NSString * _treatmentId;
    NSString * _useCaseId;
}

@property (nonatomic, retain) NSString *CipherMLCallHandle;
@property (nonatomic, retain) NSString *CipherMLRequestError;
@property (nonatomic, retain) NSArray *PECSimilarityScoresArray;
@property (nonatomic, retain) NSArray *PIRDataArray;
@property (nonatomic, retain) NSArray *PIRKeywordArray;
@property (nonatomic, retain) NSArray *PIRMissingKeywordArray;
@property (retain) NSString *accountDSID;
@property (nonatomic, retain) NSDictionary *customDescriptor;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *featureName;
@property (nonatomic, retain) NSString *modelId;
@property (nonatomic, retain) NSString *request;
@property (nonatomic, retain) NSString *schemaVersion;
@property (retain) NSString *storefrontId;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic, retain) NSString *useCaseId;

+ (id)observer;
+ (void)setObserver:(id)arg1;

- (void).cxx_destruct;
- (id)CipherMLCallHandle;
- (id)CipherMLRequestError;
- (id)PECSimilarityScoresArray;
- (id)PIRDataArray;
- (id)PIRKeywordArray;
- (id)PIRMissingKeywordArray;
- (id)accountDSID;
- (id)customDescriptor;
- (id)domain;
- (id)featureName;
- (id)getAMSRequest;
- (id)getAMSRequestForCipherML;
- (id)initAppSegmentQueryForAccountDSID:(id)arg1;
- (id)initClearUserDataFor:(id)arg1 inDomain:(id)arg2;
- (id)initModelPathRequestForUsecaseId:(id)arg1 andModelId:(id)arg2 withTreatmentId:(id)arg3 inDomain:(id)arg4;
- (id)initPECResponseForSimilarityScores:(id)arg1 requestError:(id)arg2 andCallHandle:(id)arg3;
- (id)initPIRResponseForKeywordArray:(id)arg1 withDataArray:(id)arg2 withMissingKeywords:(id)arg3 requestError:(id)arg4 andCallHandle:(id)arg5;
- (id)initWithFeatureName:(id)arg1 withAccountDSID:(id)arg2 andAccountStoreFrontId:(id)arg3 inDomain:(id)arg4 withCustomDescriptor:(id)arg5 andSchemaVersion:(id)arg6;
- (void)internalInitializer:(id)arg1 WithFeatureName:(id)arg2 withAccountDSID:(id)arg3 andAccountStoreFrontId:(id)arg4 inDomain:(id)arg5 withCustomDescriptor:(id)arg6 withModelId:(id)arg7 withTreatmentId:(id)arg8 withUseCaseId:(id)arg9 andSchemaVersion:(id)arg10;
- (id)modelId;
- (id)request;
- (id)schemaVersion;
- (void)setAccountDSID:(id)arg1;
- (void)setCipherMLCallHandle:(id)arg1;
- (void)setCipherMLRequestError:(id)arg1;
- (void)setCustomDescriptor:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setModelId:(id)arg1;
- (void)setPECSimilarityScoresArray:(id)arg1;
- (void)setPIRDataArray:(id)arg1;
- (void)setPIRKeywordArray:(id)arg1;
- (void)setPIRMissingKeywordArray:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSchemaVersion:(id)arg1;
- (void)setStorefrontId:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setUseCaseId:(id)arg1;
- (id)storefrontId;
- (id)treatmentId;
- (id)useCaseId;

@end
