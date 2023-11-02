
@interface GEOPDBusinessClaim : PBCodable <NSCopying> {
    bool  _buttonEnabled;
    NSString * _buttonLabel;
    NSString * _descriptionText;
    struct { 
        unsigned int has_buttonEnabled : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_buttonLabel : 1; 
        unsigned int read_descriptionText : 1; 
        unsigned int read_titleText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _titleText;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool buttonEnabled;
@property (nonatomic, retain) NSString *buttonLabel;
@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic) bool hasButtonEnabled;
@property (nonatomic, readonly) bool hasButtonLabel;
@property (nonatomic, readonly) bool hasDescriptionText;
@property (nonatomic, readonly) bool hasTitleText;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)businessClaimForPlaceData:(id)arg1;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)buttonEnabled;
- (id)buttonLabel;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionText;
- (id)dictionaryRepresentation;
- (bool)hasButtonEnabled;
- (bool)hasButtonLabel;
- (bool)hasDescriptionText;
- (bool)hasTitleText;
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
- (void)setButtonEnabled:(bool)arg1;
- (void)setButtonLabel:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHasButtonEnabled:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
