
@interface CloudFamilyAnalysisPETContactEvents : PBCodable <NSCopying> {
    NSMutableArray * _contactEvents;
}

@property (nonatomic, retain) NSMutableArray *contactEvents;

+ (Class)contactEventType;

- (void).cxx_destruct;
- (void)addContactEvent:(id)arg1;
- (void)clearContactEvents;
- (id)contactEventAtIndex:(unsigned long long)arg1;
- (id)contactEvents;
- (unsigned long long)contactEventsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
