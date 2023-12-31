
@interface ATXModePBEvent : PBCodable <NSCopying> {
    double  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int intValue : 1; 
        unsigned int mode : 1; 
        unsigned int origin : 1; 
        unsigned int isStart : 1; 
    }  _has;
    int  _intValue;
    bool  _isStart;
    NSString * _jsonMeta;
    int  _mode;
    int  _origin;
    NSString * _originBundleId;
    double  _startDate;
    NSString * _strValue;
    int  _type;
    NSString * _uuid;
}

@property (nonatomic) double endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasIntValue;
@property (nonatomic) bool hasIsStart;
@property (nonatomic, readonly) bool hasJsonMeta;
@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasOrigin;
@property (nonatomic, readonly) bool hasOriginBundleId;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasStrValue;
@property (nonatomic) int intValue;
@property (nonatomic) bool isStart;
@property (nonatomic, retain) NSString *jsonMeta;
@property (nonatomic) int mode;
@property (nonatomic) int origin;
@property (nonatomic, retain) NSString *originBundleId;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSString *strValue;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (int)StringAsMode:(id)arg1;
- (int)StringAsOrigin:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasEndDate;
- (bool)hasIntValue;
- (bool)hasIsStart;
- (bool)hasJsonMeta;
- (bool)hasMode;
- (bool)hasOrigin;
- (bool)hasOriginBundleId;
- (bool)hasStartDate;
- (bool)hasStrValue;
- (unsigned long long)hash;
- (int)intValue;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (id)jsonMeta;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (id)originBundleId;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasIntValue:(bool)arg1;
- (void)setHasIsStart:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setIntValue:(int)arg1;
- (void)setIsStart:(bool)arg1;
- (void)setJsonMeta:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setOrigin:(int)arg1;
- (void)setOriginBundleId:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setStrValue:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUuid:(id)arg1;
- (double)startDate;
- (id)strValue;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
