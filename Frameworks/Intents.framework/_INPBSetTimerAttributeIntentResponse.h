
@interface _INPBSetTimerAttributeIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSetTimerAttributeIntentResponse> {
    struct { }  _has;
    _INPBTimer * _updatedTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUpdatedTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTimer *updatedTimer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUpdatedTimer;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUpdatedTimer:(id)arg1;
- (id)updatedTimer;
- (void)writeTo:(id)arg1;

@end
