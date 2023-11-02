
@interface HMDStructuredWriter : HMDStructuredDataStream {
    NSError * _error;
}

+ (id)extendedTypeWriterWithWriter:(id)arg1 options:(unsigned long long)arg2;
+ (id)writerIntoOPACKData:(id)arg1;
+ (id)writerIntoObject:(id*)arg1;
+ (id)writerIntoObject:(id*)arg1 extendedTypeOptions:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)beginArrayOfSize:(unsigned long long)arg1;
- (void)beginDictionaryOfSize:(unsigned long long)arg1;
- (void)endArray;
- (void)endDictionary;
- (id)error;
- (void)failWithError:(id)arg1;
- (void)writeBoolean:(bool)arg1;
- (void)writeData:(id)arg1;
- (void)writeDate:(id)arg1;
- (void)writeDictionaryKey:(id)arg1;
- (void)writeLogicalValue:(id)arg1;
- (void)writeLogicalValue:(id)arg1 validateAndCopy:(bool)arg2;
- (void)writeNull;
- (void)writeNumber:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeToken:(struct _HMDStructuredDataToken { long long x1; id x2; })arg1;
- (void)writeUUID:(id)arg1;

@end
