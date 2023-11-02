
@interface _INPBPayloadSuccess : PBCodable <NSCopying, NSSecureCoding, _INPBPayloadSuccess> {
    struct { }  _has;
    NSString * _resolvedKeyPath;
    _INPBIntentSlotValue * _resolvedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasResolvedKeyPath;
@property (nonatomic, readonly) bool hasResolvedValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *resolvedKeyPath;
@property (nonatomic, retain) _INPBIntentSlotValue *resolvedValue;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasResolvedKeyPath;
- (bool)hasResolvedValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolvedKeyPath;
- (id)resolvedValue;
- (void)setResolvedKeyPath:(id)arg1;
- (void)setResolvedValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
