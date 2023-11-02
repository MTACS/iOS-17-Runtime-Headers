
@interface BMMessagesSharedWithYouFeedback : BMEventBase <BMStoreData> {
    NSString * _clientIdentifier;
    NSString * _clientVariant;
    double  _feedbackCreationSecondsSinceReferenceDate;
    int  _feedbackType;
    bool  _hasFeedbackCreationSecondsSinceReferenceDate;
    BMMessagesSharedWithYouFeedbackRankableSocialHighlight * _highlight;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVariant;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double feedbackCreationSecondsSinceReferenceDate;
@property (nonatomic, readonly) int feedbackType;
@property (nonatomic) bool hasFeedbackCreationSecondsSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMMessagesSharedWithYouFeedbackRankableSocialHighlight *highlight;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)clientVariant;
- (unsigned int)dataVersion;
- (id)description;
- (double)feedbackCreationSecondsSinceReferenceDate;
- (int)feedbackType;
- (bool)hasFeedbackCreationSecondsSinceReferenceDate;
- (id)highlight;
- (id)initByReadFrom:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 feedbackType:(int)arg2 feedbackCreationSecondsSinceReferenceDate:(id)arg3 highlight:(id)arg4 clientVariant:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasFeedbackCreationSecondsSinceReferenceDate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
