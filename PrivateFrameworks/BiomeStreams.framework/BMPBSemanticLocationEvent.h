
@interface BMPBSemanticLocationEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int placeType : 1; 
        unsigned int userSpecificPlaceType : 1; 
        unsigned int starting : 1; 
    }  _has;
    NSString * _loiIdentifier;
    int  _placeType;
    bool  _starting;
    int  _userSpecificPlaceType;
}

@property (nonatomic, readonly) bool hasLoiIdentifier;
@property (nonatomic) bool hasPlaceType;
@property (nonatomic) bool hasStarting;
@property (nonatomic) bool hasUserSpecificPlaceType;
@property (nonatomic, retain) NSString *loiIdentifier;
@property (nonatomic) int placeType;
@property (nonatomic) bool starting;
@property (nonatomic) int userSpecificPlaceType;

- (void).cxx_destruct;
- (int)StringAsPlaceType:(id)arg1;
- (int)StringAsUserSpecificPlaceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLoiIdentifier;
- (bool)hasPlaceType;
- (bool)hasStarting;
- (bool)hasUserSpecificPlaceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)loiIdentifier;
- (void)mergeFrom:(id)arg1;
- (int)placeType;
- (id)placeTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaceType:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setHasUserSpecificPlaceType:(bool)arg1;
- (void)setLoiIdentifier:(id)arg1;
- (void)setPlaceType:(int)arg1;
- (void)setStarting:(bool)arg1;
- (void)setUserSpecificPlaceType:(int)arg1;
- (bool)starting;
- (int)userSpecificPlaceType;
- (id)userSpecificPlaceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
