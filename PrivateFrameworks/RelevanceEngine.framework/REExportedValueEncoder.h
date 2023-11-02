
@interface REExportedValueEncoder : NSObject {
    unsigned long long  _options;
}

- (id)_namesArrayFromArray:(id)arg1;
- (void)_writeCollection:(id)arg1 toStream:(id)arg2 startBlock:(id /* block */)arg3 writerBlock:(id /* block */)arg4 endBlock:(id /* block */)arg5 wantsHeader:(bool)arg6 depth:(unsigned long long)arg7;
- (void)_writeValue:(id)arg1 toStream:(id)arg2 depth:(unsigned long long)arg3 needsIndent:(bool)arg4;
- (id)dataFromExportedValue:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)writeArrayEndToStream:(id)arg1;
- (void)writeArrayStartToStream:(id)arg1;
- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(id /* block */)arg2 isLast:(bool)arg3;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (void)writeDictionaryEndToStream:(id)arg1;
- (void)writeDictionaryStartToStream:(id)arg1;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(id /* block */)arg2 valueWriter:(id /* block */)arg3 isLast:(bool)arg4;
- (void)writeExportedValue:(id)arg1 toStream:(id)arg2;
- (void)writeNullToStream:(id)arg1;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;
- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(id /* block */)arg2 valueWriter:(id /* block */)arg3 isLast:(bool)arg4;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (void)writeUnsupportedObject:(id)arg1 toStream:(id)arg2;
- (bool)writesArrayHeader;
- (bool)writesDictionaryHeader;

@end
