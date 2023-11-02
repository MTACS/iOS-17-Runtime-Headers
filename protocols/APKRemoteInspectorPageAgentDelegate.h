
@protocol APKRemoteInspectorPageAgentDelegate

@required

- (void)pageAgent:(void *)arg1 onResourceContentRequestWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: APKRemoteInspectorPageAgent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*
- (void)pageAgent:(void *)arg1 onResourcesRequestWithCompletion:(void *)arg2; // needs 2 arg types, found 8: APKRemoteInspectorPageAgent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
