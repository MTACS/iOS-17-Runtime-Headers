
@interface GEOAPSessionData : PBCodable <NSCopying> {
    double  _createTime;
    double  _createTimeInUse;
    struct { 
        unsigned int has_sessionId : 1; 
        unsigned int has_createTimeInUse : 1; 
        unsigned int has_createTime : 1; 
        unsigned int has_mapsUserStartDate : 1; 
        unsigned int has_sessionEpoch : 1; 
        unsigned int has_opaqueAppId : 1; 
        unsigned int has_sessionHasRotated : 1; 
    }  _flags;
    double  _mapsUserStartDate;
    unsigned int  _opaqueAppId;
    NSString * _originHardwareClass;
    unsigned long long  _sessionEpoch;
    bool  _sessionHasRotated;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
}

@property (nonatomic) double createTime;
@property (nonatomic) double createTimeInUse;
@property (nonatomic) bool hasCreateTime;
@property (nonatomic) bool hasCreateTimeInUse;
@property (nonatomic) bool hasMapsUserStartDate;
@property (nonatomic) bool hasOpaqueAppId;
@property (nonatomic, readonly) bool hasOriginHardwareClass;
@property (nonatomic) bool hasSessionEpoch;
@property (nonatomic) bool hasSessionHasRotated;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) double mapsUserStartDate;
@property (nonatomic) unsigned int opaqueAppId;
@property (nonatomic, retain) NSString *originHardwareClass;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) bool sessionHasRotated;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)createTime;
- (double)createTimeInUse;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreateTime;
- (bool)hasCreateTimeInUse;
- (bool)hasMapsUserStartDate;
- (bool)hasOpaqueAppId;
- (bool)hasOriginHardwareClass;
- (bool)hasSessionEpoch;
- (bool)hasSessionHasRotated;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (double)mapsUserStartDate;
- (void)mergeFrom:(id)arg1;
- (unsigned int)opaqueAppId;
- (id)originHardwareClass;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sessionEpoch;
- (bool)sessionHasRotated;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setCreateTime:(double)arg1;
- (void)setCreateTimeInUse:(double)arg1;
- (void)setHasCreateTime:(bool)arg1;
- (void)setHasCreateTimeInUse:(bool)arg1;
- (void)setHasMapsUserStartDate:(bool)arg1;
- (void)setHasOpaqueAppId:(bool)arg1;
- (void)setHasSessionEpoch:(bool)arg1;
- (void)setHasSessionHasRotated:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setMapsUserStartDate:(double)arg1;
- (void)setOpaqueAppId:(unsigned int)arg1;
- (void)setOriginHardwareClass:(id)arg1;
- (void)setSessionEpoch:(unsigned long long)arg1;
- (void)setSessionHasRotated:(bool)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
