
@interface FTMutableAsrKeywordFinderMessage : FTAsrKeywordFinderMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTKeywordFinderRequest *session_messageAsFTKeywordFinderRequest;
@property (nonatomic, copy) FTKeywordFinderResponse *session_messageAsFTKeywordFinderResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTKeywordFinderRequest;
- (id)session_messageAsFTKeywordFinderResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTKeywordFinderRequest:(id)arg1;
- (void)setSession_messageAsFTKeywordFinderResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
