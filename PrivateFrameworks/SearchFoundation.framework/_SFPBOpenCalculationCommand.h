
@interface _SFPBOpenCalculationCommand : PBCodable <NSSecureCoding, _SFPBOpenCalculationCommand> {
    NSString * _input;
    NSString * _output;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *output;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)output;
- (bool)readFrom:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)writeTo:(id)arg1;

@end
