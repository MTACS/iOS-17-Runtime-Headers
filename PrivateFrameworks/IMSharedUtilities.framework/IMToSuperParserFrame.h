
@interface IMToSuperParserFrame : IMXMLParserFrame

- (void)parser:(id)arg1 context:(id)arg2 didEndElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5;
- (void)parser:(id)arg1 context:(id)arg2 didStartElement:(id)arg3 namespaceURI:(id)arg4 qualifiedName:(id)arg5 attributes:(id)arg6;
- (void)parser:(id)arg1 context:(id)arg2 foundCharacters:(id)arg3;
- (void)parser:(id)arg1 context:(id)arg2 foundIgnorableWhitespace:(id)arg3;

@end
