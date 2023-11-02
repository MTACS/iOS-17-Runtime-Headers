
@interface CATIDSMessageMetadata : NSObject <CATDictionaryCodable> {
    NSUUID * _messageIdentifier;
    long long  _messageType;
    unsigned long long  _messagingVersion;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSUUID *messageIdentifier;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly) unsigned long long messagingVersion;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithMessageIdentifier:(id)arg1 messageType:(long long)arg2 messagingVersion:(long long)arg3;
- (id)initWithMessageType:(long long)arg1;
- (id)messageIdentifier;
- (long long)messageType;
- (unsigned long long)messagingVersion;

@end
