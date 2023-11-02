
@interface _INPBResolveObjectReferenceIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBResolveObjectReferenceIntentResponse> {
    struct { }  _has;
    NSData * _resolvedReferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasResolvedReferences;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *resolvedReferences;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasResolvedReferences;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolvedReferences;
- (void)setResolvedReferences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
