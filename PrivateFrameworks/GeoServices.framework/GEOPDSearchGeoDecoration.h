
@interface GEOPDSearchGeoDecoration : PBCodable <NSCopying> {
    NSMutableArray * _alternatives;
    NSString * _canonicalForm;
    NSString * _cardinalWord;
    struct { 
        unsigned int has_isArticle : 1; 
        unsigned int has_isCardinal : 1; 
        unsigned int has_isDirection : 1; 
        unsigned int has_isDropped : 1; 
        unsigned int has_isMultiTokenDirection : 1; 
        unsigned int has_isMultiTokenTitle : 1; 
        unsigned int has_isMultiTokenType : 1; 
        unsigned int has_isOrdinal : 1; 
        unsigned int has_isPersonalName : 1; 
        unsigned int has_isStopWord : 1; 
        unsigned int has_isTitle : 1; 
        unsigned int has_isType : 1; 
        unsigned int read_alternatives : 1; 
        unsigned int read_canonicalForm : 1; 
        unsigned int read_cardinalWord : 1; 
        unsigned int read_ordinalWord : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isArticle;
    bool  _isCardinal;
    bool  _isDirection;
    bool  _isDropped;
    bool  _isMultiTokenDirection;
    bool  _isMultiTokenTitle;
    bool  _isMultiTokenType;
    bool  _isOrdinal;
    bool  _isPersonalName;
    bool  _isStopWord;
    bool  _isTitle;
    bool  _isType;
    NSString * _ordinalWord;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
