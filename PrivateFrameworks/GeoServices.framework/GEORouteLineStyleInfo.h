
@interface GEORouteLineStyleInfo : PBCodable <NSCopying> {
    unsigned int  _endOffsetCm;
    struct { 
        unsigned int has_endOffsetCm : 1; 
        unsigned int has_purpose : 1; 
        unsigned int has_startOffsetCm : 1; 
        unsigned int has_preserveStyleInUpdates : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_labelInfo : 1; 
        unsigned int read_laneChangeInfos : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLabelInfo * _labelInfo;
    NSMutableArray * _laneChangeInfos;
    bool  _preserveStyleInUpdates;
    int  _purpose;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _startOffsetCm;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int endOffsetCm;
@property (nonatomic) bool hasEndOffsetCm;
@property (nonatomic, readonly) bool hasLabelInfo;
@property (nonatomic) bool hasPreserveStyleInUpdates;
@property (nonatomic) bool hasPurpose;
@property (nonatomic) bool hasStartOffsetCm;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, retain) GEOLabelInfo *labelInfo;
@property (nonatomic, retain) NSMutableArray *laneChangeInfos;
@property (nonatomic) bool preserveStyleInUpdates;
@property (nonatomic) int purpose;
@property (nonatomic) unsigned int startOffsetCm;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)laneChangeInfoType;

- (void).cxx_destruct;
- (int)StringAsPurpose:(id)arg1;
- (void)addLaneChangeInfo:(id)arg1;
- (void)clearLaneChangeInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endOffsetCm;
- (bool)hasEndOffsetCm;
- (bool)hasLabelInfo;
- (bool)hasPreserveStyleInUpdates;
- (bool)hasPurpose;
- (bool)hasStartOffsetCm;
- (bool)hasStyleAttributes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)labelInfo;
- (id)laneChangeInfoAtIndex:(unsigned long long)arg1;
- (id)laneChangeInfos;
- (unsigned long long)laneChangeInfosCount;
- (void)mergeFrom:(id)arg1;
- (bool)preserveStyleInUpdates;
- (int)purpose;
- (id)purposeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndOffsetCm:(unsigned int)arg1;
- (void)setHasEndOffsetCm:(bool)arg1;
- (void)setHasPreserveStyleInUpdates:(bool)arg1;
- (void)setHasPurpose:(bool)arg1;
- (void)setHasStartOffsetCm:(bool)arg1;
- (void)setLabelInfo:(id)arg1;
- (void)setLaneChangeInfos:(id)arg1;
- (void)setPreserveStyleInUpdates:(bool)arg1;
- (void)setPurpose:(int)arg1;
- (void)setStartOffsetCm:(unsigned int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (unsigned int)startOffsetCm;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
