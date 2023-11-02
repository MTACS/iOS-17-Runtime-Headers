
@interface PaperKit.PaperKitPDFDocument : PDFDocument {
    void pageIdMap;
    void pageProxies;
    void pdfPageIdMap;
}

@property (nonatomic, readonly) Class pageClass;

- (void).cxx_destruct;
- (Class)annotationSubclassForType:(id)arg1;
- (id)copyWithZone:(void*)arg1;
- (void)exchangePageAtIndex:(long long)arg1 withPageAtIndex:(long long)arg2;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)insertPage:(id)arg1 atIndex:(long long)arg2;
- (id)pageAtIndex:(long long)arg1;
- (Class)pageClass;
- (void)removePageAtIndex:(long long)arg1;
- (bool)unlockWithPassword:(id)arg1;

@end
