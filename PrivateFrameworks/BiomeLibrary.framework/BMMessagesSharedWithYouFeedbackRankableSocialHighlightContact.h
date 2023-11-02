
@interface BMMessagesSharedWithYouFeedbackRankableSocialHighlightContact : BMEventBase <BMStoreData> {
    NSString * _handle;
    bool  _hasIsMe;
    bool  _hasIsSignificant;
    bool  _isMe;
    bool  _isSignificant;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic) bool hasIsMe;
@property (nonatomic) bool hasIsSignificant;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly) bool isSignificant;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)handle;
- (bool)hasIsMe;
- (bool)hasIsSignificant;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsSignificant:(id)arg1 handle:(id)arg2 isMe:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (bool)isSignificant;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasIsMe:(bool)arg1;
- (void)setHasIsSignificant:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
