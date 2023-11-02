
@interface EMTop : QLTop <OIProgressiveReaderDelegate>

@property (readonly) EMWorkbookMapper *mapper;

+ (bool)supportsProgressiveMapping;

- (void)initializeClasses;
- (Class)mapperClassForIndexing:(bool)arg1;
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(bool)arg6;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
- (Class)stateClass;

@end
