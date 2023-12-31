
@interface SXDocumentControllerContainer : NSObject <SXDocumentControllerContainer> {
    SXDocumentController * _documentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)documentController;
- (void)registerDocumentController:(id)arg1;

@end
