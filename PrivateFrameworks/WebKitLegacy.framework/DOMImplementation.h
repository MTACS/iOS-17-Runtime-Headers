
@interface DOMImplementation : DOMObject

- (id)createCSSStyleSheet:(id)arg1 :(id)arg2;
- (id)createCSSStyleSheet:(id)arg1 media:(id)arg2;
- (id)createDocument:(id)arg1 :(id)arg2 :(id)arg3;
- (id)createDocument:(id)arg1 qualifiedName:(id)arg2 doctype:(id)arg3;
- (id)createDocumentType:(id)arg1 :(id)arg2 :(id)arg3;
- (id)createDocumentType:(id)arg1 publicId:(id)arg2 systemId:(id)arg3;
- (id)createHTMLDocument:(id)arg1;
- (void)dealloc;
- (bool)hasFeature:(id)arg1 :(id)arg2;
- (bool)hasFeature:(id)arg1 version:(id)arg2;

@end
