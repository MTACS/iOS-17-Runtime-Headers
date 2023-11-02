
@interface CRKIDSMessageMetadata : NSObject <CRKDictionaryCodable> {
    NSUUID * _messageIdentifier;
    long long  _messageType;
    long long  _messagingVersion;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSUUID *messageIdentifier;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly) long long messagingVersion;

+ (id)instanceWithDictionary:(id)arg1;
+ (id)metadataWithMessageType:(long long)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithMessageIdentifier:(id)arg1 messageType:(long long)arg2 messagingVersion:(long long)arg3;
- (id)messageIdentifier;
- (long long)messageType;
- (long long)messagingVersion;

@end
