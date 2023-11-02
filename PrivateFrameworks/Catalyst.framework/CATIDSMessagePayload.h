
@interface CATIDSMessagePayload : NSObject <CATDictionaryCodable> {
    <CATIDSMessage> * _message;
    CATIDSMessageMetadata * _metadata;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) <CATIDSMessage> *message;
@property (nonatomic, readonly) CATIDSMessageMetadata *metadata;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithMessage:(id)arg1;
- (id)initWithMetadata:(id)arg1 message:(id)arg2;
- (id)message;
- (id)messageContent;
- (id)metadata;

@end
