
@interface WBReader : OCBReader {
    void * mAnnotationBookmarkTable;
    NSMutableArray * mAnnotationOwners;
    id  mAnnotationRangeStart;
    void * mAnnotationTable;
    NSMutableDictionary * mBookmarkIndexToAnnotationRangeStartMap;
    void * mBookmarkTable;
    void * mEndnoteTable;
    struct WrdEshObjectFactory { int (**x1)(); bool x2; } * mEshObjectFactory;
    struct WrdFieldPositionTable {} * mFieldPositionTables;
    void * mFileShapeAddressHeaderTable;
    void * mFileShapeAddressTable;
    void * mFootnoteTable;
    void * mHeaderStoryTable;
    OITSUNoCopyDictionary * mIndexToFonts;
    OITSUNoCopyDictionary * mIndexToStyles;
    void * mLastRowParagraphProperties;
    WBOfficeArtReaderState * mOfficeArtState;
    NSMutableDictionary * mPreviousFlowElement;
    bool  mReportProgress;
    void * mStoryTable;
    void * mTableHeaders;
    WDDocument * mTargetDocument;
    void * mTextBoxes;
}

@property (readonly) NSMutableDictionary *previousFlowElement;
@property (nonatomic) WDDocument *targetDocument;

- (void).cxx_destruct;
- (void)addFont:(id)arg1 index:(int)arg2;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (void*)annotationBookmarkTable;
- (id)annotationOwner:(int)arg1;
- (id)annotationRangeStart;
- (id)annotationRangeStartForBookmarkIndex:(unsigned long long)arg1;
- (void*)annotationTable;
- (void*)bookmarkTable;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (void)dealloc;
- (id)drawableForShapeId:(unsigned int)arg1;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (void*)endnoteTable;
- (struct WrdEshObjectFactory { int (**x1)(); bool x2; }*)eshObjectFactory;
- (void*)fieldPositionTableForTextType:(int)arg1;
- (void*)fileShapeAddressHeaderTable;
- (void*)fileShapeAddressTable;
- (id)fontAtIndex:(int)arg1;
- (void*)footnoteTable;
- (void*)headerStoryTable;
- (id)initWithCancelDelegate:(id)arg1;
- (void)initialize;
- (void*)lastRowParagraphProperties;
- (id)officeArtState;
- (id)previousFlowElement;
- (id)read;
- (id)readCharactersForTextRun:(struct WrdTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)readCharactersFrom:(unsigned int)arg1 to:(unsigned int)arg2 textType:(int)arg3;
- (bool)reportProgress;
- (void)setAnnotationRangeStart:(id)arg1;
- (void)setAnnotationRangeStart:(id)arg1 forBookmarkIndex:(unsigned long long)arg2;
- (void)setLastRowParagraphProperties:(void*)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setReportProgress:(bool)arg1;
- (void)setTargetDocument:(id)arg1;
- (bool)start;
- (void*)storyTable;
- (id)styleAtIndex:(int)arg1;
- (id)styleAtIndex:(int)arg1 expectedType:(int)arg2;
- (void*)tableHeaders;
- (id)targetDocument;
- (unsigned long long)textBoxCount;
- (struct WBTextBoxReaderInfo { id x1; unsigned short x2; })textBoxInfoAtIndex:(unsigned long long)arg1;
- (void*)wrdReader;

@end
