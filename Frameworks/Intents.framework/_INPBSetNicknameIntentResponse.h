
@interface _INPBSetNicknameIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSetNicknameIntentResponse> {
    struct { }  _has;
    _INPBContactCard * _meCard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMeCard;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBContactCard *meCard;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMeCard;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)meCard;
- (bool)readFrom:(id)arg1;
- (void)setMeCard:(id)arg1;
- (void)writeTo:(id)arg1;

@end
