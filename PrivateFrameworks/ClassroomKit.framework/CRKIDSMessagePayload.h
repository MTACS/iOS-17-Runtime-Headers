
@interface CRKIDSMessagePayload : NSObject <CRKDictionaryCodable> {
    NSDictionary * _messageContent;
    CRKIDSMessageMetadata * _messageMetadata;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSDictionary *messageContent;
@property (nonatomic, readonly) CRKIDSMessageMetadata *messageMetadata;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithMessageContent:(id)arg1 messageMetadata:(id)arg2;
- (id)messageContent;
- (id)messageMetadata;

@end
