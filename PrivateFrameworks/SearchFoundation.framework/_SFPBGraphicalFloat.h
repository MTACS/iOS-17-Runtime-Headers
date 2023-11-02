
@interface _SFPBGraphicalFloat : PBCodable <NSSecureCoding, _SFPBGraphicalFloat> {
    double  _doubleValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doubleValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithCGFloat:(double)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)writeTo:(id)arg1;

@end
