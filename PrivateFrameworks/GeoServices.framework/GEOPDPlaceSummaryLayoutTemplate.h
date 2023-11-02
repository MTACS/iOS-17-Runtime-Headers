
@interface GEOPDPlaceSummaryLayoutTemplate : PBCodable <NSCopying> {
    struct { 
        unsigned int read_templateEntrys : 1; 
        unsigned int read_templateId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _templateEntrys;
    NSString * _templateId;
}

@property (nonatomic, readonly) bool hasTemplateId;
@property (nonatomic, retain) NSMutableArray *templateEntrys;
@property (nonatomic, retain) NSString *templateId;

+ (bool)isValid:(id)arg1;
+ (Class)templateEntryType;

- (void).cxx_destruct;
- (void)addTemplateEntry:(id)arg1;
- (void)clearTemplateEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasTemplateId;
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
- (void)setTemplateEntrys:(id)arg1;
- (void)setTemplateId:(id)arg1;
- (id)templateEntryAtIndex:(unsigned long long)arg1;
- (id)templateEntrys;
- (unsigned long long)templateEntrysCount;
- (id)templateId;
- (void)writeTo:(id)arg1;

@end
