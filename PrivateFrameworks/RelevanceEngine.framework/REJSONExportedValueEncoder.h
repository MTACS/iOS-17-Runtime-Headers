
@interface REJSONExportedValueEncoder : REExportedValueEncoder

+ (id)_dateFormatter;

- (void)_writeValueAsJSON:(id)arg1 toStream:(id)arg2;
- (void)writeArrayEndToStream:(id)arg1;
- (void)writeArrayStartToStream:(id)arg1;
- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(id /* block */)arg2 isLast:(bool)arg3;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (void)writeDictionaryEndToStream:(id)arg1;
- (void)writeDictionaryStartToStream:(id)arg1;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(id /* block */)arg2 valueWriter:(id /* block */)arg3 isLast:(bool)arg4;
- (void)writeNullToStream:(id)arg1;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;
- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(id /* block */)arg2 valueWriter:(id /* block */)arg3 isLast:(bool)arg4;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (bool)writesArrayHeader;
- (bool)writesDictionaryHeader;

@end
