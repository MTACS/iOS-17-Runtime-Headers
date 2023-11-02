
@interface SGMIFeatureVector : NSObject {
    SGMIBiomeReducedMessageEvents * _biomeMessageSummary;
    NSMutableDictionary * _features;
    bool  _filledWithInformationRetrievedThroughMaild;
    bool  _hasHashedMessageId;
    SGMailClientUtil * _mailClientUtil;
    SGSimpleMailMessage * _mailMessage;
    NSString * _messageId;
    NSNumber * _senderConnectionScore;
    NSString * _spotlightIdentifier;
    SGSqlEntityStore * _store;
}

@property (nonatomic, readonly) bool hasHashedMessageId;
@property (nonatomic, readonly) SGSimpleMailMessage *mailMessage;
@property (nonatomic, readonly) NSString *mailboxId;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) SGSqlEntityStore *store;

- (void).cxx_destruct;
- (id)cachedFeature:(long long)arg1;
- (id)defaultSaliencyOnError;
- (id)defaultSaliencyOnOverrideFor:(long long)arg1;
- (id)description;
- (long long)estimateGroundTruth;
- (long long)estimateGroundTruthWithConfig:(id)arg1;
- (long long)evaluateFirstMatchAmong:(id)arg1 defaultValue:(long long)arg2;
- (id)feature:(long long)arg1;
- (id)features;
- (id)flatVectorForFeatureNames:(id)arg1;
- (bool)hasHashedMessageId;
- (void)ingestFeatures:(id)arg1;
- (id)initWithMessageId:(id)arg1 hasHashedMessageId:(bool)arg2 simpleMailMessage:(id)arg3 senderConnectionScore:(id)arg4 biomeMessageSummary:(id)arg5 mailClientUtil:(id)arg6 store:(id)arg7 preLoadedFeatureNames:(id)arg8;
- (id)initWithMessageId:(id)arg1 hasHashedMessageId:(bool)arg2 simpleMailMessage:(id)arg3 senderConnectionScore:(id)arg4 biomeMessageSummary:(id)arg5 store:(id)arg6 preLoadedFeatureNames:(id)arg7;
- (id)initWithMessageId:(id)arg1 hasHashedMessageId:(bool)arg2 simpleMailMessage:(id)arg3 spotlightIdentifier:(id)arg4 senderConnectionScore:(id)arg5 biomeMessageSummary:(id)arg6 mailClientUtil:(id)arg7 store:(id)arg8 preLoadedFeatureNames:(id)arg9;
- (id)initWithMessageId:(id)arg1 hasHashedMessageId:(bool)arg2 simpleMailMessage:(id)arg3 spotlightIdentifier:(id)arg4 senderConnectionScore:(id)arg5 biomeMessageSummary:(id)arg6 store:(id)arg7 preLoadedFeatureNames:(id)arg8;
- (void)logOrStageWithSaliency:(id)arg1;
- (id)mailMessage;
- (id)mailboxId;
- (id)messageId;
- (id)saliencyWithScore:(id)arg1 isSalient:(bool)arg2;
- (id)saliencyWithScore:(id)arg1 isSalient:(bool)arg2 gteSaliency:(long long)arg3 isCounted:(bool)arg4;
- (void)setFeatureToNumberArrayValue:(id)arg1 forName:(long long)arg2;
- (void)setFeatureToNumberValue:(id)arg1 forName:(long long)arg2;
- (void)setFeatureToStringArrayValue:(id)arg1 forName:(long long)arg2;
- (void)setFeatureToStringValue:(id)arg1 forName:(long long)arg2;
- (id)store;

@end
