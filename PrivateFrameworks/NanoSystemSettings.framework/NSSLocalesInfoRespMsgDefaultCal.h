
@interface NSSLocalesInfoRespMsgDefaultCal : PBCodable <NSCopying> {
    NSString * _calendar;
    NSString * _locale;
}

@property (nonatomic, retain) NSString *calendar;
@property (nonatomic, retain) NSString *locale;

- (void).cxx_destruct;
- (id)calendar;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)writeTo:(id)arg1;

@end
