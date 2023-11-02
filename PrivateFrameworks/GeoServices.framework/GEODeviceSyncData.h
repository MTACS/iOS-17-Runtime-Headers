
@interface GEODeviceSyncData : PBCodable <NSCopying> {
    double  _createTime;
    struct { 
        unsigned int has_sessionId : 1; 
        unsigned int has_createTime : 1; 
    }  _flags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
}

@property (nonatomic) double createTime;
@property (nonatomic) bool hasCreateTime;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)createTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreateTime;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setCreateTime:(double)arg1;
- (void)setHasCreateTime:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
