
@interface DOMNativeXPathNSResolver : DOMObject <DOMXPathNSResolver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)lookupNamespaceURI:(id)arg1;

@end
