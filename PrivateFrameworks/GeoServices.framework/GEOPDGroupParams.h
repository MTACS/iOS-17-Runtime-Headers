
@interface GEOPDGroupParams : PBCodable <NSCopying> {
    int  _actionDataItemIndex;
    struct { 
        unsigned int has_actionDataItemIndex : 1; 
        unsigned int has_groupButtonType : 1; 
    }  _flags;
    int  _groupButtonType;
    GEOPDGroupData * _groupData;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int actionDataItemIndex;
@property (nonatomic) int groupButtonType;
@property (nonatomic, retain) GEOPDGroupData *groupData;
@property (nonatomic) bool hasActionDataItemIndex;
@property (nonatomic) bool hasGroupButtonType;
@property (nonatomic, readonly) bool hasGroupData;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsGroupButtonType:(id)arg1;
- (int)actionDataItemIndex;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)groupButtonType;
- (id)groupButtonTypeAsString:(int)arg1;
- (id)groupData;
- (bool)hasActionDataItemIndex;
- (bool)hasGroupButtonType;
- (bool)hasGroupData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionDataItemIndex:(int)arg1;
- (void)setGroupButtonType:(int)arg1;
- (void)setGroupData:(id)arg1;
- (void)setHasActionDataItemIndex:(bool)arg1;
- (void)setHasGroupButtonType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
