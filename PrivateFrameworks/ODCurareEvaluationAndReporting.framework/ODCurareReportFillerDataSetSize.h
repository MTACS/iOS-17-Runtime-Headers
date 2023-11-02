
@interface ODCurareReportFillerDataSetSize : PBCodable <NSCopying> {
    unsigned int  _numberOfUserSamples;
    unsigned int  _numberOfUserSessions;
}

@property (nonatomic) unsigned int numberOfUserSamples;
@property (nonatomic) unsigned int numberOfUserSessions;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfUserSamples;
- (unsigned int)numberOfUserSessions;
- (bool)readFrom:(id)arg1;
- (void)setNumberOfUserSamples:(unsigned int)arg1;
- (void)setNumberOfUserSessions:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
