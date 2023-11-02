
@protocol APKRemoteInspectorDOMAgentDelegate

@required

- (void)DOMAgent:(void *)arg1 onAttributesRequestWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: APKRemoteInspectorDOMAgent *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)DOMAgent:(void *)arg1 onChildNodeRequestWithParentIdentifier:(void *)arg2 depth:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: APKRemoteInspectorDOMAgent *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)DOMAgent:(void *)arg1 onDocumentWithCompletion:(void *)arg2; // needs 2 arg types, found 8: APKRemoteInspectorDOMAgent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <APKRemoteInspectorNodeProtocol> *, NSError *, void*
- (void)DOMAgent:(void *)arg1 onOuterHTMLRequestWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: APKRemoteInspectorDOMAgent *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
