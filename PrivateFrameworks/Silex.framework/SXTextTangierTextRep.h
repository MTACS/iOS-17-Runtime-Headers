
@interface SXTextTangierTextRep : TSWPRep <SXAXCustomRotorItemProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (id)storage;
- (id)supportedCustomRotors;
- (Class)wpEditorClass;

@end
