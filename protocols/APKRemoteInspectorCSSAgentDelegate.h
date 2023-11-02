
@protocol APKRemoteInspectorCSSAgentDelegate

@required

- (void)CSSAgent:(void *)arg1 onComputedStylesRequestWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: APKRemoteInspectorCSSAgent *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)CSSAgent:(void *)arg1 onInlineStylesRequestWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: APKRemoteInspectorCSSAgent *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <APKRemoteInspectorStyleProtocol> *, NSError *, void*

@end
