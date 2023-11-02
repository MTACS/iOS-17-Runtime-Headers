
@interface VideosUI.UPNPDeviceDescriptionParser : NSObject <NSXMLParserDelegate> {
    void currentElementName;
    void scratchpad;
    void xmlPath;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end
