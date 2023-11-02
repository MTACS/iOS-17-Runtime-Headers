
@interface _INPBSupportedTrafficIncidentType : PBCodable <NSCopying, NSSecureCoding, _INPBSupportedTrafficIncidentType> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    _INPBString * _localizedDisplayString;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLocalizedDisplayString;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *localizedDisplayString;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocalizedDisplayString;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayString;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLocalizedDisplayString:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
