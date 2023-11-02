
@interface EBReaderState : EBState {
    ECColumnWidthConvertor * mColumnWidthConvertor;
    bool  mImportCSV;
    OABReaderState * mOAState;
    struct XlEshObjectFactory { int (**x1)(); bool x2; } * mXlEshObjectFactory;
    void * mXlReader;
    void * mXlSheetInfoTable;
}

@property (nonatomic) bool importCSV;

- (void).cxx_destruct;
- (id)columnWidthConvertor;
- (void)dealloc;
- (bool)importCSV;
- (id)initWithXlReader:(void*)arg1 cancelDelegate:(id)arg2;
- (id)oaState;
- (void)pauseReading;
- (void)readGlobalXlObjects;
- (void)reportWarning:(id)arg1;
- (void)resumeReading;
- (void)setImportCSV:(bool)arg1;
- (void*)xlReader;
- (void*)xlSheetInfoTable;

@end
