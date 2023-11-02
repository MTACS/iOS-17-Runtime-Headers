
@interface _INPBGenericIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBGenericIntentResponse> {
    struct { }  _has;
    _INPBIntentMetadata * _metadata;
    NSArray * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *metadata;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (readonly) Class superclass;

+ (Class)propertiesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end
