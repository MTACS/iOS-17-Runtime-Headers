
@interface EMWorkbookMapper : CMDocumentMapper <CMMapperRoot> {
    OIXMLElement * mBodyElement;
    NSString * mFileName;
    bool  mHasPushedFirstSheet;
    bool  mHasPushedHeader;
    int  mHeight;
    bool  mIsFirstMappedSheet;
    bool  mIsFrameset;
    bool  mLoadingMessageVisible;
    unsigned long long  mNumberOfMappedSheets;
    unsigned long long  mRealSheetCount;
    NSString * mResourceUrlPrefix;
    NSString * mResourceUrlProtocol;
    unsigned int  mSheetIndex;
    NSMutableArray * mSheetURLs;
    NSString * mStyleSheetGuid;
    OIXMLDocument * mTabBarDoc;
    NSString * mTabBarURL;
    double  mTabPosition;
    int  mWidth;
    NSMutableArray * mWorksheetGuids;
    NSMutableArray * mWorksheetNames;
    NSMutableArray * mWorksheetUrls;
    OIXMLDocument * mXhtmlDoc;
}

@property (readonly) EDWorkbook *document;
@property (retain) NSString *fileName;

+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)cssStyleCache;

- (void).cxx_destruct;
- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (id)_frontPageByCopyingMainPage;
- (id)_mainPageBack;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)copySheetMapperWithEdSheet:(id)arg1;
- (id)documentTitle;
- (id)fileName;
- (void)finishMappingWithState:(id)arg1;
- (bool)hasMultipleSheets;
- (id)headElementForFrontPage;
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (void)mapStylesheetData:(id)arg1 name:(id)arg2 atElement:(id)arg3;
- (void)mapStylesheetNamed:(id)arg1 atElement:(id)arg2;
- (struct CGSize { double x1; double x2; })pageSizeForDevice;
- (void)setElementCount:(unsigned long long)arg1;
- (void)setFileName:(id)arg1;
- (void)startMappingWithState:(id)arg1;
- (id)styleMatrix;
- (id)tabTitleDrawingAttributes;

@end
