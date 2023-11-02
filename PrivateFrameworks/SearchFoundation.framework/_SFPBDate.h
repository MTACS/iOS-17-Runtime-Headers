
@interface _SFPBDate : PBCodable <NSSecureCoding, _SFPBDate> {
    double  _secondsSince1970;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double secondsSince1970;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithNSDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (double)secondsSince1970;
- (void)setSecondsSince1970:(double)arg1;
- (void)writeTo:(id)arg1;

@end
