
@interface HWPMessage : PBCodable <NSCopying> {
    long long  _creationDate;
    NSData * _drawing;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _identifier;
    PBUnknownFields * _unknownFields;
    unsigned int  _version;
}

@property (nonatomic) long long creationDate;
@property (nonatomic, retain) NSData *drawing;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasDrawing;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)drawing;
- (bool)hasCreationDate;
- (bool)hasDrawing;
- (bool)hasIdentifier;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(long long)arg1;
- (void)setDrawing:(id)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)unknownFields;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
