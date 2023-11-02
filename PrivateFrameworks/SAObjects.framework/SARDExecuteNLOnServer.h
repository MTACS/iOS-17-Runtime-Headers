
@interface SARDExecuteNLOnServer : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSArray *aceDelegatedUserDialogActList;
@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *preITNRecognitionSausageMap;
@property (nonatomic, retain) SASRecognition *recognitionSausage;
@property (nonatomic, copy) NSDictionary *recognitionSausageMap;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSDictionary *requestExecutionParameters;
@property (nonatomic, copy) NSString *requestType;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *utterance;

- (id)aceDelegatedUserDialogActList;
- (id)directAction;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)preITNRecognitionSausageMap;
- (id)recognitionSausage;
- (id)recognitionSausageMap;
- (id)requestExecutionParameters;
- (id)requestType;
- (bool)requiresResponse;
- (id)resultCandidateId;
- (void)setAceDelegatedUserDialogActList:(id)arg1;
- (void)setDirectAction:(id)arg1;
- (void)setPreITNRecognitionSausageMap:(id)arg1;
- (void)setRecognitionSausage:(id)arg1;
- (void)setRecognitionSausageMap:(id)arg1;
- (void)setRequestExecutionParameters:(id)arg1;
- (void)setRequestType:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;

@end
