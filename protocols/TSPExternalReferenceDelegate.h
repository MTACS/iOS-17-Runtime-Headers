
@protocol TSPExternalReferenceDelegate

@required

- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(TSPObject *)arg2 objectUUIDOrNil:(NSUUID *)arg3 outComponentIsVersioned:(bool*)arg4;
- (TSPObject *)explicitComponentRootObjectForObject:(TSPObject *)arg1;
- (TSPObject *)objectForIdentifier:(long long)arg1;
- (bool)wasComponentCopied:(long long)arg1;

@end
