
@interface WMTop : QLTop

- (void)initializeClasses;
- (Class)mapperClassForIndexing:(bool)arg1;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)stateClass;

@end
