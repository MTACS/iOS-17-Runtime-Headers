
@interface _SFPBApiResults : PBCodable <NSSecureCoding, _SFPBApiResults> {
    NSArray * _flights;
    int  _resultType;
    int  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *flights;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int resultType;
@property (nonatomic) int status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFlights:(id)arg1;
- (void)clearFlights;
- (id)dictionaryRepresentation;
- (id)flights;
- (id)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (void)setFlights:(id)arg1;
- (void)setResultType:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
