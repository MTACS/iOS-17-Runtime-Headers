
@interface GEOLPRLicensePlateStructure : PBCodable <NSCopying> {
    struct { 
        unsigned int read_supportedPlateAlphabetLetters : 1; 
        unsigned int read_supportedPlateNumerics : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _supportedPlateAlphabetLetters;
    NSString * _supportedPlateNumerics;
}

@property (nonatomic, readonly) bool hasSupportedPlateAlphabetLetters;
@property (nonatomic, readonly) bool hasSupportedPlateNumerics;
@property (nonatomic, retain) NSString *supportedPlateAlphabetLetters;
@property (nonatomic, retain) NSString *supportedPlateNumerics;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSupportedPlateAlphabetLetters;
- (bool)hasSupportedPlateNumerics;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSupportedPlateAlphabetLetters:(id)arg1;
- (void)setSupportedPlateNumerics:(id)arg1;
- (id)supportedPlateAlphabetLetters;
- (id)supportedPlateNumerics;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)supportedAlphabeticCharacterSet;
- (id)supportedNumericCharacterSet;

@end
