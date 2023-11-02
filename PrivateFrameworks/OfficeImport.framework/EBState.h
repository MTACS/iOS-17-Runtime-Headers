
@interface EBState : NSObject {
    <TCCancelDelegate> * mCancelDelegate;
    EDResources * mResources;
    void * mSheetNames;
    EDWorkbook * mWorkbook;
    void * mXlFormulaProcessor;
    void * mXlLinkTable;
    void * mXlNameTable;
}

@property (nonatomic, readonly) <TCCancelDelegate> *cancelDelegate;

- (void).cxx_destruct;
- (id)cancelDelegate;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
- (bool)isCancelled;
- (id)resources;
- (void)setResources:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (void*)sheetNames;
- (id)workbook;
- (void*)xlFormulaProcessor;
- (void*)xlLinkTable;
- (void*)xlNameTable;

@end
