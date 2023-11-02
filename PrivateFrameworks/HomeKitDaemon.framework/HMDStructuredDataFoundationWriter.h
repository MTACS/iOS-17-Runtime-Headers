
@interface HMDStructuredDataFoundationWriter : HMDStructuredWriter {
    id  _container;
    NSString * _currentKey;
    bool  _mutableContainers;
    NSMutableArray * _stack;
}

- (void).cxx_destruct;
- (void)beginArrayOfSize:(unsigned long long)arg1;
- (void)beginDictionaryOfSize:(unsigned long long)arg1;
- (void)emitRootValue:(id)arg1;
- (void)endArray;
- (void)endDictionary;
- (void)failWithError:(id)arg1;
- (id)init;
- (id)initWithMutableContainers:(bool)arg1;
- (void)writeBoolean:(bool)arg1;
- (void)writeData:(id)arg1;
- (void)writeDate:(id)arg1;
- (void)writeDictionaryKey:(id)arg1;
- (void)writeLogicalValue:(id)arg1 validateAndCopy:(bool)arg2;
- (void)writeNull;
- (void)writeNumber:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeUUID:(id)arg1;

@end
