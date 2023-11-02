
@interface GEOPBTransitPaymentMethodSuggestionDetails : PBCodable <NSCopying> {
    NSMutableArray * _educationalScreenAssets;
    GEOFormattedString * _educationalScreenHeader;
    NSMutableArray * _educationalScreenPaymentBodys;
    struct { 
        unsigned int has_paymentMethodRegionMuid : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_educationalScreenAssets : 1; 
        unsigned int read_educationalScreenHeader : 1; 
        unsigned int read_educationalScreenPaymentBodys : 1; 
        unsigned int read_suggestionBody : 1; 
        unsigned int read_suggestionTitle : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _paymentMethodRegionMuid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _suggestionBody;
    GEOFormattedString * _suggestionTitle;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *educationalScreenAssets;
@property (nonatomic, retain) GEOFormattedString *educationalScreenHeader;
@property (nonatomic, retain) NSMutableArray *educationalScreenPaymentBodys;
@property (nonatomic, readonly) bool hasEducationalScreenHeader;
@property (nonatomic) bool hasPaymentMethodRegionMuid;
@property (nonatomic, readonly) bool hasSuggestionBody;
@property (nonatomic, readonly) bool hasSuggestionTitle;
@property (nonatomic) unsigned long long paymentMethodRegionMuid;
@property (nonatomic, retain) GEOFormattedString *suggestionBody;
@property (nonatomic, retain) GEOFormattedString *suggestionTitle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)educationalScreenAssetType;
+ (Class)educationalScreenPaymentBodyType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addEducationalScreenAsset:(id)arg1;
- (void)addEducationalScreenPaymentBody:(id)arg1;
- (void)clearEducationalScreenAssets;
- (void)clearEducationalScreenPaymentBodys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)educationalScreenAssetAtIndex:(unsigned long long)arg1;
- (id)educationalScreenAssets;
- (unsigned long long)educationalScreenAssetsCount;
- (id)educationalScreenHeader;
- (id)educationalScreenPaymentBodyAtIndex:(unsigned long long)arg1;
- (id)educationalScreenPaymentBodys;
- (unsigned long long)educationalScreenPaymentBodysCount;
- (bool)hasEducationalScreenHeader;
- (bool)hasPaymentMethodRegionMuid;
- (bool)hasSuggestionBody;
- (bool)hasSuggestionTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)paymentMethodRegionMuid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEducationalScreenAssets:(id)arg1;
- (void)setEducationalScreenHeader:(id)arg1;
- (void)setEducationalScreenPaymentBodys:(id)arg1;
- (void)setHasPaymentMethodRegionMuid:(bool)arg1;
- (void)setPaymentMethodRegionMuid:(unsigned long long)arg1;
- (void)setSuggestionBody:(id)arg1;
- (void)setSuggestionTitle:(id)arg1;
- (id)suggestionBody;
- (id)suggestionTitle;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
