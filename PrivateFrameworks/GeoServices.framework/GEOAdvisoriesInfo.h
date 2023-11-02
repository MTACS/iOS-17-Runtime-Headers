
@interface GEOAdvisoriesInfo : PBCodable <NSCopying> {
    GEOClickableAdvisory * _clickableAdvisory;
    GEOAdvisoryNotice * _evAdvisory;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clickableAdvisory : 1; 
        unsigned int read_evAdvisory : 1; 
        unsigned int read_genericAdvisorys : 1; 
        unsigned int read_incidentAdvisorys : 1; 
        unsigned int read_noticeAdvisorys : 1; 
        unsigned int read_tollAdvisory : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _genericAdvisorys;
    NSMutableArray * _incidentAdvisorys;
    NSMutableArray * _noticeAdvisorys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOAdvisoryNotice * _tollAdvisory;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOClickableAdvisory *clickableAdvisory;
@property (nonatomic, retain) GEOAdvisoryNotice *evAdvisory;
@property (nonatomic, retain) NSMutableArray *genericAdvisorys;
@property (nonatomic, readonly) bool hasClickableAdvisory;
@property (nonatomic, readonly) bool hasEvAdvisory;
@property (nonatomic, readonly) bool hasTollAdvisory;
@property (nonatomic, retain) NSMutableArray *incidentAdvisorys;
@property (nonatomic, retain) NSMutableArray *noticeAdvisorys;
@property (nonatomic, retain) GEOAdvisoryNotice *tollAdvisory;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)genericAdvisoryType;
+ (Class)incidentAdvisoryType;
+ (bool)isValid:(id)arg1;
+ (Class)noticeAdvisoryType;

- (void).cxx_destruct;
- (void)addGenericAdvisory:(id)arg1;
- (void)addIncidentAdvisory:(id)arg1;
- (void)addNoticeAdvisory:(id)arg1;
- (void)clearGenericAdvisorys;
- (void)clearIncidentAdvisorys;
- (void)clearNoticeAdvisorys;
- (void)clearUnknownFields:(bool)arg1;
- (id)clickableAdvisory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evAdvisory;
- (id)genericAdvisoryAtIndex:(unsigned long long)arg1;
- (id)genericAdvisorys;
- (unsigned long long)genericAdvisorysCount;
- (bool)hasClickableAdvisory;
- (bool)hasEvAdvisory;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasTollAdvisory;
- (unsigned long long)hash;
- (id)incidentAdvisoryAtIndex:(unsigned long long)arg1;
- (id)incidentAdvisorys;
- (unsigned long long)incidentAdvisorysCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)noticeAdvisoryAtIndex:(unsigned long long)arg1;
- (id)noticeAdvisorys;
- (unsigned long long)noticeAdvisorysCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClickableAdvisory:(id)arg1;
- (void)setEvAdvisory:(id)arg1;
- (void)setGenericAdvisorys:(id)arg1;
- (void)setIncidentAdvisorys:(id)arg1;
- (void)setNoticeAdvisorys:(id)arg1;
- (void)setTollAdvisory:(id)arg1;
- (id)tollAdvisory;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
