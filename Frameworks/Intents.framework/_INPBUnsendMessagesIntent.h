
@interface _INPBUnsendMessagesIntent : PBCodable <NSCopying, NSSecureCoding, _INPBUnsendMessagesIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _messageIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *messageIdentifiers;
@property (nonatomic, readonly) unsigned long long messageIdentifiersCount;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addMessageIdentifiers:(id)arg1;
- (void)clearMessageIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)messageIdentifiers;
- (id)messageIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageIdentifiersCount;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMessageIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
