
@interface _INPBJSONDictionary : PBCodable <NSCopying, NSSecureCoding, _INPBJSONDictionary> {
    struct { }  _has;
    NSString * _jsonString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasJsonString;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonString;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasJsonString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonString;
- (bool)readFrom:(id)arg1;
- (void)setJsonString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
