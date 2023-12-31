
@interface SXDocumentProvider : NSObject <SXDocumentProviding> {
    SXDocument * _document;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)document;
- (void)setDocument:(id)arg1;

@end
