
@interface DOMNodeFilter : DOMObject <DOMNodeFilter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (short)acceptNode:(id)arg1;
- (void)dealloc;

@end
