
@interface PETProtobufRawDecodedMessage : PBCodable {
    NSMutableDictionary * _decodedDict;
    NSDictionary * _nestedFields;
}

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 nestedFields:(id)arg2;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
