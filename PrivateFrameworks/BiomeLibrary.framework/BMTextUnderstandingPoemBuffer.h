
@interface BMTextUnderstandingPoemBuffer : BMEventBase <BMStoreData> {
    NSArray * _continuousFeatures;
    NSString * _conversationId;
    NSArray * _extractions;
    bool  _hasPhotoAttachment;
    bool  _hasRaw_messageTimestamp;
    bool  _photoAttachment;
    NSString * _rawMessage;
    double  _raw_messageTimestamp;
    NSString * _senderId;
    NSString * _spotlightId;
}

@property (nonatomic, readonly) NSArray *continuousFeatures;
@property (nonatomic, readonly) NSString *conversationId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *extractions;
@property (nonatomic) bool hasPhotoAttachment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *messageTimestamp;
@property (nonatomic, readonly) bool photoAttachment;
@property (nonatomic, readonly) NSString *rawMessage;
@property (nonatomic, readonly) NSString *senderId;
@property (nonatomic, readonly) NSString *spotlightId;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_continuousFeaturesJSONArray;
- (id)_extractionsJSONArray;
- (id)continuousFeatures;
- (id)conversationId;
- (unsigned int)dataVersion;
- (id)description;
- (id)extractions;
- (bool)hasPhotoAttachment;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMessageTimestamp:(id)arg1 conversationId:(id)arg2 spotlightId:(id)arg3 photoAttachment:(id)arg4 extractions:(id)arg5 continuousFeatures:(id)arg6 rawMessage:(id)arg7;
- (id)initWithMessageTimestamp:(id)arg1 conversationId:(id)arg2 spotlightId:(id)arg3 photoAttachment:(id)arg4 extractions:(id)arg5 continuousFeatures:(id)arg6 rawMessage:(id)arg7 senderId:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)messageTimestamp;
- (bool)photoAttachment;
- (id)rawMessage;
- (id)senderId;
- (id)serialize;
- (void)setHasPhotoAttachment:(bool)arg1;
- (id)spotlightId;
- (void)writeTo:(id)arg1;

@end
