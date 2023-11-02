
@interface CRListOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *items;
@property (readonly) Class superclass;

+ (id)listsWithParagraphs:(id)arg1;

- (bool)contributesToDocumentHierarchy;
- (id)initWithListItems:(id)arg1;
- (id)items;
- (id)layoutComponents;
- (id)regionsSuitableForDataDetectorOutput;
- (unsigned long long)type;

@end
