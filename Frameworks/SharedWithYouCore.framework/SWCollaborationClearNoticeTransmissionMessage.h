
@interface SWCollaborationClearNoticeTransmissionMessage : PBCodable <NSCopying> {
    NSString * _collaborationId;
    double  _dateAsTimeIntervalSince1970;
    NSString * _guidString;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *collaborationId;
@property (nonatomic) double dateAsTimeIntervalSince1970;
@property (nonatomic, retain) NSString *guidString;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)collaborationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateAsTimeIntervalSince1970;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guidString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollaborationId:(id)arg1;
- (void)setDateAsTimeIntervalSince1970:(double)arg1;
- (void)setGuidString:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
