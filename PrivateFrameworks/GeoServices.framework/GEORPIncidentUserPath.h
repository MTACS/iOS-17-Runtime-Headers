
@interface GEORPIncidentUserPath : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transportType : 1; 
        unsigned int has_navigationActive : 1; 
        unsigned int has_reportedFromCarplay : 1; 
    }  _flags;
    bool  _navigationActive;
    bool  _reportedFromCarplay;
    int  _transportType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _userPaths;
}

@property (nonatomic) bool hasNavigationActive;
@property (nonatomic) bool hasReportedFromCarplay;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool navigationActive;
@property (nonatomic) bool reportedFromCarplay;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) int*userPaths;
@property (nonatomic, readonly) unsigned long long userPathsCount;

+ (bool)isValid:(id)arg1;

- (int)StringAsTransportType:(id)arg1;
- (int)StringAsUserPaths:(id)arg1;
- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNavigationActive;
- (bool)hasReportedFromCarplay;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)navigationActive;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (bool)reportedFromCarplay;
- (void)setHasNavigationActive:(bool)arg1;
- (void)setHasReportedFromCarplay:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setNavigationActive:(bool)arg1;
- (void)setReportedFromCarplay:(bool)arg1;
- (void)setTransportType:(int)arg1;
- (void)setUserPaths:(int*)arg1 count:(unsigned long long)arg2;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (int)userPathAtIndex:(unsigned long long)arg1;
- (int*)userPaths;
- (id)userPathsAsString:(int)arg1;
- (unsigned long long)userPathsCount;
- (void)writeTo:(id)arg1;

@end
