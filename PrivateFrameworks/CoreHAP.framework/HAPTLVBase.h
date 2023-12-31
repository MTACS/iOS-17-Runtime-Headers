
@interface HAPTLVBase : HAPTLVDescription {
    NSData * _tlvDatablob;
}

@property (nonatomic, readonly) NSData *tlvDatablob;

- (void).cxx_destruct;
- (bool)_parse:(id)arg1;
- (id)_parseArray:(id)arg1 result:(id*)arg2 objectCreator:(id /* block */)arg3;
- (bool)_parseFields:(id)arg1;
- (bool)_parseFromTLVData;
- (bool)_parseMandatory:(id)arg1 optional:(id)arg2;
- (id)initWithTLVData:(id)arg1;
- (id)tlvDatablob;

@end
