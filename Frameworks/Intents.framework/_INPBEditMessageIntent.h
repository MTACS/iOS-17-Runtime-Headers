
@interface _INPBEditMessageIntent : PBCodable <NSCopying, NSSecureCoding, _INPBEditMessageIntent> {
    NSString * _editedContent;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSString * _messageIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *editedContent;
@property (nonatomic, readonly) bool hasEditedContent;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasMessageIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)editedContent;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEditedContent;
- (bool)hasIntentMetadata;
- (bool)hasMessageIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)messageIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setEditedContent:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
