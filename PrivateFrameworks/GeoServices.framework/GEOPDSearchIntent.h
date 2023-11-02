
@interface GEOPDSearchIntent : PBCodable <NSCopying> {
    GEOPDSearchAttributeIntent * _attributeIntent;
    GEOPDSearchBusinessIntent * _businessIntent;
    GEOPDSearchCategoryIntent * _categoryIntent;
    GEOPDSearchChainIntent * _chainIntent;
    GEOPDSearchClientResolvedIntent * _clientResolvedIntent;
    GEOPDSearchDirectionIntent * _directionIntent;
    struct { 
        unsigned int has_intentSpanIndex : 1; 
        unsigned int has_intentType : 1; 
        unsigned int read_attributeIntent : 1; 
        unsigned int read_businessIntent : 1; 
        unsigned int read_categoryIntent : 1; 
        unsigned int read_chainIntent : 1; 
        unsigned int read_clientResolvedIntent : 1; 
        unsigned int read_directionIntent : 1; 
        unsigned int read_geoIntent : 1; 
        unsigned int read_keywordIntent : 1; 
        unsigned int read_languageCodes : 1; 
        unsigned int read_locationIntent : 1; 
        unsigned int read_phoneNumberIntent : 1; 
        unsigned int read_proximityIntent : 1; 
        unsigned int read_searchFilterIntent : 1; 
        unsigned int read_transitIntent : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDSearchGeoIntent * _geoIntent;
    unsigned int  _intentSpanIndex;
    int  _intentType;
    GEOPDSearchKeywordIntent * _keywordIntent;
    NSMutableArray * _languageCodes;
    GEOPDSearchLocationIntent * _locationIntent;
    GEOPDSearchPhoneNumberIntent * _phoneNumberIntent;
    GEOPDSearchProximityIntent * _proximityIntent;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchSearchFilterIntent * _searchFilterIntent;
    GEOPDSearchTransitIntent * _transitIntent;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
