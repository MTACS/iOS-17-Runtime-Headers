
@interface SGDetectedAttributeDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    SGContactPipelineHelper * _contactsHelper;
    NSSet * _coreNLPTrustedLanguages;
    NSSet * _ddTrustedLanguages;
    bool  _filterWithAddressBook;
    SGHKHealthStore * _healthStore;
    NSSet * _hmmTrustedLanguages;
    SGDetectedAttributeML * _ml;
    SGQuickResponsesML * _mlQR;
    unsigned long long  _selfIdentificationMessageCount;
    float  _unlikelyPhoneSamplingRate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selfIdentificationMessageCount;
@property (readonly) Class superclass;

+ (void)_logSelfIDForMessage:(id)arg1 detection:(id)arg2 modelType:(struct SGMSelfIdModelType_ { unsigned long long x1; })arg3 modelVersion:(unsigned long long)arg4;
+ (void)clearConversationCache;
+ (id)currentPatterns;
+ (id)dissectorWithMockedMLTrainingForTests;
+ (bool)isAddressContext:(id)arg1;
+ (bool)isBirthdayContext:(id)arg1;
+ (bool)isMaybeNameContext:(id)arg1;
+ (bool)isNameRequest:(id)arg1;
+ (bool)isPhoneContext:(id)arg1;
+ (bool)isTwoPersonConversation:(id)arg1;
+ (id)patterns;

- (void).cxx_destruct;
- (void)_addAuthorContactForMessage:(id)arg1 entity:(id)arg2;
- (void)_dissectMessage:(id)arg1 entity:(id)arg2;
- (id)_extractEmailishTokenFromMailHeader:(id)arg1;
- (id)_makeAlnum:(id)arg1;
- (id)_makeSimplifiedListIdEmail:(id)arg1;
- (void)_removeUnwantedContactDetails:(id)arg1 entity:(id)arg2;
- (id)detailTypeFromPrefix:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)detectionFromBodyDDMatch:(id)arg1 message:(id)arg2 withSupervisionToFill:(id)arg3 isUnlikelyPhone:(bool)arg4;
- (id)detectionFromSignatureDDMatch:(id)arg1 message:(id)arg2 detectedLabelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 lastClaimedLabelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 isUnlikelyPhone:(bool)arg5;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)filterDangerousSigAddressDetections:(id)arg1;
- (id)filterDangerousSigDetections:(id)arg1 message:(id)arg2;
- (id)filterDangerousSigEmailDetections:(id)arg1 message:(id)arg2;
- (id)filterDangerousSigPhoneDetections:(id)arg1 message:(id)arg2;
- (id)getLineContaining:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inText:(id)arg2;
- (id)getResponsesForBirthdayExtractionFromMessage:(id)arg1 withLanguage:(id)arg2;
- (void)handleTextMessageBirthdayCongratulation:(id)arg1 entity:(id)arg2 withConversationHistory:(id)arg3;
- (void)handleTextMessageSelfIdentification:(id)arg1 entity:(id)arg2 withConversationHistory:(id)arg3;
- (id)init;
- (id)initWithML:(id)arg1 withMLQR:(id)arg2 andHealthStore:(id)arg3;
- (void)logBirthdayExtractionMetricForPerson:(id)arg1 forDate:(id)arg2 isFromCongratulation:(unsigned char)arg3 withModelVersion:(id)arg4 didRegexTrigger:(unsigned char)arg5 didResponseKitTrigger:(unsigned char)arg6;
- (id)processTextMessageConversation:(id)arg1 threadLength:(unsigned long long)arg2;
- (unsigned long long)selfIdentificationMessageCount;
- (void)setSelfIdentificationMessageCount:(unsigned long long)arg1;

@end
