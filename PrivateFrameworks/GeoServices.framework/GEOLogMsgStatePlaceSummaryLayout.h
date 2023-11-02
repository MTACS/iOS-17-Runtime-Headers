
@interface GEOLogMsgStatePlaceSummaryLayout : PBCodable <NSCopying> {
    NSMutableArray * _dynamicContextHyperlinkDetails;
    struct { 
        unsigned int read_muids : 1; 
        unsigned int read_dynamicContextHyperlinkDetails : 1; 
        unsigned int read_trailingEntityActionDetails : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _muids;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _trailingEntityActionDetails;
}

@property (nonatomic, retain) NSMutableArray *dynamicContextHyperlinkDetails;
@property (nonatomic, readonly) unsigned long long*muids;
@property (nonatomic, readonly) unsigned long long muidsCount;
@property (nonatomic, retain) NSMutableArray *trailingEntityActionDetails;

+ (Class)dynamicContextHyperlinkDetailsType;
+ (bool)isValid:(id)arg1;
+ (Class)trailingEntityActionDetailsType;

- (void).cxx_destruct;
- (void)addDynamicContextHyperlinkDetails:(id)arg1;
- (void)addMuids:(unsigned long long)arg1;
- (void)addTrailingEntityActionDetails:(id)arg1;
- (void)clearDynamicContextHyperlinkDetails;
- (void)clearMuids;
- (void)clearTrailingEntityActionDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dynamicContextHyperlinkDetails;
- (id)dynamicContextHyperlinkDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dynamicContextHyperlinkDetailsCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long*)muids;
- (unsigned long long)muidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)muidsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDynamicContextHyperlinkDetails:(id)arg1;
- (void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTrailingEntityActionDetails:(id)arg1;
- (id)trailingEntityActionDetails;
- (id)trailingEntityActionDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trailingEntityActionDetailsCount;
- (void)writeTo:(id)arg1;

@end
