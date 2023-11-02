
@interface _INPBSetNicknameIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetNicknameIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBModifyNickname * _targetNickname;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetNickname;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBModifyNickname *targetNickname;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasTargetNickname;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetNickname:(id)arg1;
- (id)targetNickname;
- (void)writeTo:(id)arg1;

@end
