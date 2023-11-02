
@interface _SFPBClockImage : PBCodable <NSSecureCoding, _SFPBClockImage> {
    int  _hour;
    int  _minute;
    int  _second;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hour;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int minute;
@property (nonatomic) int second;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)hour;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)minute;
- (bool)readFrom:(id)arg1;
- (int)second;
- (void)setHour:(int)arg1;
- (void)setMinute:(int)arg1;
- (void)setSecond:(int)arg1;
- (void)writeTo:(id)arg1;

@end
