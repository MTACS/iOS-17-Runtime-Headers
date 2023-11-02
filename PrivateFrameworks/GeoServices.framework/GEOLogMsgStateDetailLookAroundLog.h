
@interface GEOLogMsgStateDetailLookAroundLog : PBCodable <NSCopying> {
    double  _durationSec;
    struct { 
        unsigned int has_durationSec : 1; 
        unsigned int has_poisShown : 1; 
        unsigned int read_lookAroundPipRecords : 1; 
        unsigned int read_lookAroundViewRecords : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _lookAroundPipRecords;
    NSMutableArray * _lookAroundViewRecords;
    unsigned int  _poisShown;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) double durationSec;
@property (nonatomic) bool hasDurationSec;
@property (nonatomic) bool hasPoisShown;
@property (nonatomic, retain) NSMutableArray *lookAroundPipRecords;
@property (nonatomic, retain) NSMutableArray *lookAroundViewRecords;
@property (nonatomic) unsigned int poisShown;

+ (bool)isValid:(id)arg1;
+ (Class)lookAroundPipRecordsType;
+ (Class)lookAroundViewRecordsType;

- (void).cxx_destruct;
- (void)addLookAroundPipRecords:(id)arg1;
- (void)addLookAroundViewRecords:(id)arg1;
- (void)clearLookAroundPipRecords;
- (void)clearLookAroundViewRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationSec;
- (bool)hasDurationSec;
- (bool)hasPoisShown;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lookAroundPipRecords;
- (id)lookAroundPipRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)lookAroundPipRecordsCount;
- (id)lookAroundViewRecords;
- (id)lookAroundViewRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)lookAroundViewRecordsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)poisShown;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationSec:(double)arg1;
- (void)setHasDurationSec:(bool)arg1;
- (void)setHasPoisShown:(bool)arg1;
- (void)setLookAroundPipRecords:(id)arg1;
- (void)setLookAroundViewRecords:(id)arg1;
- (void)setPoisShown:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
