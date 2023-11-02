
@interface GEOPBTransitPaymentMethodSuggestion : PBCodable <NSCopying> {
    struct { 
        unsigned int has_purpose : 1; 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_paymentMethodIndexs : 1; 
        unsigned int read_paymentMethodSuggestionDetails : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _paymentMethodIndexs;
    GEOPBTransitPaymentMethodSuggestionDetails * _paymentMethodSuggestionDetails;
    int  _purpose;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPaymentMethodSuggestionDetails;
@property (nonatomic) bool hasPurpose;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) unsigned int*paymentMethodIndexs;
@property (nonatomic, readonly) unsigned long long paymentMethodIndexsCount;
@property (nonatomic, retain) GEOPBTransitPaymentMethodSuggestionDetails *paymentMethodSuggestionDetails;
@property (nonatomic) int purpose;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsPurpose:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addPaymentMethodIndex:(unsigned int)arg1;
- (void)clearPaymentMethodIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentMethodSuggestionDetails;
- (bool)hasPurpose;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)paymentMethodIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)paymentMethodIndexs;
- (unsigned long long)paymentMethodIndexsCount;
- (id)paymentMethodSuggestionDetails;
- (int)purpose;
- (id)purposeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPurpose:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPaymentMethodIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPaymentMethodSuggestionDetails:(id)arg1;
- (void)setPurpose:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
