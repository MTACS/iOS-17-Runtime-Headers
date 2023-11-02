
@interface SWCollaborationNoticeTransmissionMessage : PBCodable <NSCopying> {
    double  _dateAsTimeIntervalSince1970;
    NSString * _guidString;
    NSData * _highlightChangeEvent;
    long long  _highlightChangeEventType;
    unsigned int  _version;
}

@property (nonatomic) double dateAsTimeIntervalSince1970;
@property (nonatomic, retain) NSString *guidString;
@property (nonatomic, retain) NSData *highlightChangeEvent;
@property (nonatomic) long long highlightChangeEventType;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateAsTimeIntervalSince1970;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guidString;
- (unsigned long long)hash;
- (id)highlightChangeEvent;
- (long long)highlightChangeEventType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateAsTimeIntervalSince1970:(double)arg1;
- (void)setGuidString:(id)arg1;
- (void)setHighlightChangeEvent:(id)arg1;
- (void)setHighlightChangeEventType:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
