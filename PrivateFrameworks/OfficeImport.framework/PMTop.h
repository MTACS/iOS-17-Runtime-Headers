
@interface PMTop : QLTop <OIProgressiveReaderDelegate>

+ (bool)supportsProgressiveMapping;

- (void)initializeClasses;
- (bool)isCancelled;
- (Class)mapperClassForIndexing:(bool)arg1;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(bool)arg6;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)stateClass;

@end
