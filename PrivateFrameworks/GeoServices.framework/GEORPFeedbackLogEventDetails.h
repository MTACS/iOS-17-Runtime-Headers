
@interface GEORPFeedbackLogEventDetails : PBCodable <NSCopying> {
    GEORPRapNotificationLogEvent * _rapNotificationLogEvent;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasRapNotificationLogEvent;
@property (nonatomic, retain) GEORPRapNotificationLogEvent *rapNotificationLogEvent;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRapNotificationLogEvent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)rapNotificationLogEvent;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setRapNotificationLogEvent:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
