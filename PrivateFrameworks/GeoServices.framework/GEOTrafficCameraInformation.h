
@interface GEOTrafficCameraInformation : PBCodable <NSCopying> {
    NSString * _cameraIdentifier;
    int  _cameraType;
    struct { 
        unsigned int has_cameraType : 1; 
    }  _flags;
}

@property (nonatomic, retain) NSString *cameraIdentifier;
@property (nonatomic) int cameraType;
@property (nonatomic, readonly) bool hasCameraIdentifier;
@property (nonatomic) bool hasCameraType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCameraType:(id)arg1;
- (id)cameraIdentifier;
- (int)cameraType;
- (id)cameraTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraIdentifier;
- (bool)hasCameraType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCameraIdentifier:(id)arg1;
- (void)setCameraType:(int)arg1;
- (void)setHasCameraType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
