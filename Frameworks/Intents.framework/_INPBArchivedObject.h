
@interface _INPBArchivedObject : PBCodable <NSCopying, NSSecureCoding, _INPBArchivedObject> {
    struct { }  _has;
    NSData * _messageData;
    NSString * _typeName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMessageData;
@property (nonatomic, readonly) bool hasTypeName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *messageData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMessageData;
- (bool)hasTypeName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)messageData;
- (bool)readFrom:(id)arg1;
- (void)setMessageData:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;
- (void)writeTo:(id)arg1;

@end
