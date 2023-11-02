
@interface _SFPBInvokeSiriCommand : PBCodable <NSSecureCoding, _SFPBInvokeSiriCommand> {
    NSString * _utteranceText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *utteranceText;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setUtteranceText:(id)arg1;
- (id)utteranceText;
- (void)writeTo:(id)arg1;

@end
