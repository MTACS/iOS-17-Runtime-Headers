
@interface GEORestrictionDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_messageStrings : 1; 
        unsigned int read_title : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _messageStrings;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSMutableArray *messageStrings;
@property (nonatomic, retain) GEOFormattedString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)messageStringType;

- (void).cxx_destruct;
- (void)addMessageString:(id)arg1;
- (void)clearMessageStrings;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)messageStringAtIndex:(unsigned long long)arg1;
- (id)messageStrings;
- (unsigned long long)messageStringsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMessageStrings:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
