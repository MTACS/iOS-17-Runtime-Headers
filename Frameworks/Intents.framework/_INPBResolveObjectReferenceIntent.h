
@interface _INPBResolveObjectReferenceIntent : PBCodable <NSCopying, NSSecureCoding, _INPBResolveObjectReferenceIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSData * _reference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSData *reference;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasReference;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reference;
- (void)setIntentMetadata:(id)arg1;
- (void)setReference:(id)arg1;
- (void)writeTo:(id)arg1;

@end
