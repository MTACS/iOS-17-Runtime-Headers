
@interface CATSharingMessage : NSObject <CATDictionaryCodable> {
    NSDictionary * _contentDictionaryValue;
    long long  _messageType;
}

@property (nonatomic, readonly, copy) NSDictionary *contentDictionaryValue;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) long long messageType;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)contentDictionaryValue;
- (id)dictionaryValue;
- (id)initWithContentMessage:(id)arg1;
- (id)initWithMessageType:(long long)arg1 contentDictionary:(id)arg2;
- (long long)messageType;

@end
