
@interface _INPBCreateTimerIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBCreateTimerIntentResponse> {
    _INPBTimer * _createdTimer;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBTimer *createdTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCreatedTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdTimer;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCreatedTimer;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedTimer:(id)arg1;
- (void)writeTo:(id)arg1;

@end
