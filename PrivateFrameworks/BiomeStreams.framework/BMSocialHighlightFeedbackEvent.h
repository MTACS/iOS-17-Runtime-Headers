
@interface BMSocialHighlightFeedbackEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _clientIdentifier;
    NSString * _clientVariant;
    NSDate * _feedbackCreationDate;
    unsigned long long  _feedbackType;
    BMRankableSocialHighlight * _highlight;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVariant;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *feedbackCreationDate;
@property (nonatomic, readonly) unsigned long long feedbackType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMRankableSocialHighlight *highlight;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned long long)_feedbackTypeForProtoType:(int)arg1;
- (int)_protoFeedbackType;
- (id)clientIdentifier;
- (id)clientVariant;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)feedbackCreationDate;
- (unsigned long long)feedbackType;
- (id)highlight;
- (id)initWithClientIdentifier:(id)arg1 feedbackType:(unsigned long long)arg2 feedbackCreationDate:(id)arg3 highlight:(id)arg4;
- (id)initWithClientIdentifier:(id)arg1 feedbackType:(unsigned long long)arg2 feedbackCreationDate:(id)arg3 highlight:(id)arg4 clientVariant:(id)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)proto;
- (id)serialize;

@end
