
@interface GEOTransitSignInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    NSMutableArray * _commandFormatteds;
    NSMutableArray * _detailFormatteds;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_commandFormatteds : 1; 
        unsigned int read_detailFormatteds : 1; 
        unsigned int read_noticeFormatteds : 1; 
        unsigned int read_priceFormatteds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _noticeFormatteds;
    NSMutableArray * _priceFormatteds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *commandFormatteds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *detailFormatteds;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *noticeFormatteds;
@property (nonatomic, retain) NSMutableArray *priceFormatteds;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)commandFormattedType;
+ (Class)detailFormattedType;
+ (bool)isValid:(id)arg1;
+ (Class)noticeFormattedType;
+ (Class)priceFormattedType;

- (void).cxx_destruct;
- (bool)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)arg1;
- (void)addCommandFormatted:(id)arg1;
- (void)addDetailFormatted:(id)arg1;
- (void)addNoticeFormatted:(id)arg1;
- (void)addPriceFormatted:(id)arg1;
- (void)clearCommandFormatteds;
- (void)clearDetailFormatteds;
- (void)clearNoticeFormatteds;
- (void)clearPriceFormatteds;
- (void)clearUnknownFields:(bool)arg1;
- (id)commandFormattedAtIndex:(unsigned long long)arg1;
- (id)commandFormatteds;
- (unsigned long long)commandFormattedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailFormattedAtIndex:(unsigned long long)arg1;
- (id)detailFormatteds;
- (unsigned long long)detailFormattedsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)noticeFormattedAtIndex:(unsigned long long)arg1;
- (id)noticeFormatteds;
- (unsigned long long)noticeFormattedsCount;
- (id)priceFormattedAtIndex:(unsigned long long)arg1;
- (id)priceFormatteds;
- (unsigned long long)priceFormattedsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommandFormatteds:(id)arg1;
- (void)setDetailFormatteds:(id)arg1;
- (void)setNoticeFormatteds:(id)arg1;
- (void)setPriceFormatteds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
