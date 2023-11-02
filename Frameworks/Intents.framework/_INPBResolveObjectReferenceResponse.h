
@interface _INPBResolveObjectReferenceResponse : PBCodable <NSCopying, NSSecureCoding, _INPBResolveObjectReferenceResponse> {
    struct { }  _has;
    NSData * _resolvedReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasResolvedReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *resolvedReference;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasResolvedReference;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolvedReference;
- (void)setResolvedReference:(id)arg1;
- (void)writeTo:(id)arg1;

@end
