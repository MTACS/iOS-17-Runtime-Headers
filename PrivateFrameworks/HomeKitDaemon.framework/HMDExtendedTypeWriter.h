
@interface HMDExtendedTypeWriter : HMDStructuredWriter {
    unsigned long long  _options;
    HMDStructuredWriter * _writer;
}

- (void).cxx_destruct;
- (void)beginArrayOfSize:(unsigned long long)arg1;
- (void)beginDictionaryOfSize:(unsigned long long)arg1;
- (void)endArray;
- (void)endDictionary;
- (id)error;
- (void)failWithError:(id)arg1;
- (id)initWithWriter:(id)arg1 options:(unsigned long long)arg2;
- (void)writeBoolean:(bool)arg1;
- (void)writeData:(id)arg1;
- (void)writeDate:(id)arg1;
- (void)writeDictionaryKey:(id)arg1;
- (void)writeNull;
- (void)writeNumber:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeUUID:(id)arg1;

@end
