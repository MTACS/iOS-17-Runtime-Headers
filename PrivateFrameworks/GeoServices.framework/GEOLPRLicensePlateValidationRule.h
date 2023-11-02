
@interface GEOLPRLicensePlateValidationRule : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxLength : 1; 
        unsigned int has_minLength : 1; 
        unsigned int read_impliedPowerTypeKeys : 1; 
        unsigned int read_impliedVehicleTypeKeys : 1; 
        unsigned int read_regularExpression : 1; 
        unsigned int read_validCharacters : 1; 
        unsigned int read_validationRanges : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _impliedPowerTypeKeys;
    NSMutableArray * _impliedVehicleTypeKeys;
    unsigned int  _maxLength;
    unsigned int  _minLength;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _regularExpression;
    NSString * _validCharacters;
    NSMutableArray * _validationRanges;
}

@property (nonatomic) bool hasMaxLength;
@property (nonatomic) bool hasMinLength;
@property (nonatomic, readonly) bool hasRegularExpression;
@property (nonatomic, readonly) bool hasValidCharacters;
@property (nonatomic, retain) NSMutableArray *impliedPowerTypeKeys;
@property (nonatomic, retain) NSMutableArray *impliedVehicleTypeKeys;
@property (nonatomic) unsigned int maxLength;
@property (nonatomic) unsigned int minLength;
@property (nonatomic, retain) NSString *regularExpression;
@property (nonatomic, retain) NSString *validCharacters;
@property (nonatomic, retain) NSMutableArray *validationRanges;

+ (Class)impliedPowerTypeKeyType;
+ (Class)impliedVehicleTypeKeyType;
+ (bool)isValid:(id)arg1;
+ (Class)validationRangesType;

- (void).cxx_destruct;
- (void)addImpliedPowerTypeKey:(id)arg1;
- (void)addImpliedVehicleTypeKey:(id)arg1;
- (void)addValidationRanges:(id)arg1;
- (void)clearImpliedPowerTypeKeys;
- (void)clearImpliedVehicleTypeKeys;
- (void)clearValidationRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxLength;
- (bool)hasMinLength;
- (bool)hasRegularExpression;
- (bool)hasValidCharacters;
- (unsigned long long)hash;
- (id)impliedPowerTypeKeyAtIndex:(unsigned long long)arg1;
- (id)impliedPowerTypeKeys;
- (unsigned long long)impliedPowerTypeKeysCount;
- (id)impliedVehicleTypeKeyAtIndex:(unsigned long long)arg1;
- (id)impliedVehicleTypeKeys;
- (unsigned long long)impliedVehicleTypeKeysCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)maxLength;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minLength;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)regularExpression;
- (void)setHasMaxLength:(bool)arg1;
- (void)setHasMinLength:(bool)arg1;
- (void)setImpliedPowerTypeKeys:(id)arg1;
- (void)setImpliedVehicleTypeKeys:(id)arg1;
- (void)setMaxLength:(unsigned int)arg1;
- (void)setMinLength:(unsigned int)arg1;
- (void)setRegularExpression:(id)arg1;
- (void)setValidCharacters:(id)arg1;
- (void)setValidationRanges:(id)arg1;
- (id)validCharacters;
- (id)validationRanges;
- (id)validationRangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)validationRangesCount;
- (void)writeTo:(id)arg1;

@end
