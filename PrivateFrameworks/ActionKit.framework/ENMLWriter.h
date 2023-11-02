
@interface ENMLWriter : ENXMLWriter

+ (id)emptyNote;
+ (bool)validateURLComponents:(id)arg1;

- (void)endDocument;
- (id)init;
- (void)startDocument;
- (void)startDocumentWithAttributes:(id)arg1;
- (bool)startElement:(id)arg1 attributes:(id)arg2;
- (id)validateURLAttribute:(id)arg1 inAttributes:(id)arg2;
- (void)writeEncryptedInfo:(id)arg1;
- (void)writeResource:(id)arg1;
- (void)writeResourceWithDataHash:(id)arg1 mime:(id)arg2 attributes:(id)arg3;
- (void)writeTodoWithCheckedState:(bool)arg1;

@end
