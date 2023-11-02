
@interface _INPBIntent : PBCodable <NSCopying, NSSecureCoding, _INPBIntent> {
    _INPBAppIdentifier * _appIdentifier;
    NSString * _encodedIntent;
    NSString * _encodedIntentDefinition;
    int  _encodingFormat;
    struct { 
        unsigned int encodingFormat : 1; 
    }  _has;
    NSString * _intentTypeName;
}

@property (nonatomic, retain) _INPBAppIdentifier *appIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *encodedIntent;
@property (nonatomic, copy) NSString *encodedIntentDefinition;
@property (nonatomic) int encodingFormat;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic, readonly) bool hasEncodedIntent;
@property (nonatomic, readonly) bool hasEncodedIntentDefinition;
@property (nonatomic) bool hasEncodingFormat;
@property (nonatomic, readonly) bool hasIntentTypeName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intentTypeName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEncodingFormat:(id)arg1;
- (id)appIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedIntent;
- (id)encodedIntentDefinition;
- (int)encodingFormat;
- (id)encodingFormatAsString:(int)arg1;
- (bool)hasAppIdentifier;
- (bool)hasEncodedIntent;
- (bool)hasEncodedIntentDefinition;
- (bool)hasEncodingFormat;
- (bool)hasIntentTypeName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentTypeName;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setEncodedIntent:(id)arg1;
- (void)setEncodedIntentDefinition:(id)arg1;
- (void)setEncodingFormat:(int)arg1;
- (void)setHasEncodingFormat:(bool)arg1;
- (void)setIntentTypeName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
