
@interface GEOFormattedStringMetaData : PBCodable <NSCopying> {
    struct { 
        unsigned int has_realtimeStatus : 1; 
        unsigned int has_spokenPrivacyFilterType : 1; 
    }  _flags;
    int  _realtimeStatus;
    int  _spokenPrivacyFilterType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasRealtimeStatus;
@property (nonatomic) bool hasSpokenPrivacyFilterType;
@property (nonatomic) int realtimeStatus;
@property (nonatomic) int spokenPrivacyFilterType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsRealtimeStatus:(id)arg1;
- (int)StringAsSpokenPrivacyFilterType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRealtimeStatus;
- (bool)hasSpokenPrivacyFilterType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)realtimeStatus;
- (id)realtimeStatusAsString:(int)arg1;
- (void)setHasRealtimeStatus:(bool)arg1;
- (void)setHasSpokenPrivacyFilterType:(bool)arg1;
- (void)setRealtimeStatus:(int)arg1;
- (void)setSpokenPrivacyFilterType:(int)arg1;
- (int)spokenPrivacyFilterType;
- (id)spokenPrivacyFilterTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
