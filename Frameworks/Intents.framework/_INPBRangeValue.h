
@interface _INPBRangeValue : PBCodable <NSCopying, NSSecureCoding, _INPBRangeValue> {
    struct { 
        unsigned int length : 1; 
        unsigned int location : 1; 
    }  _has;
    unsigned long long  _length;
    unsigned long long  _location;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasLocation;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long location;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLength;
- (bool)hasLocation;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)location;
- (bool)readFrom:(id)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
