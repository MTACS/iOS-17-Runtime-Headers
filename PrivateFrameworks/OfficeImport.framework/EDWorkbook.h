
@interface EDWorkbook : OCDDocument {
    unsigned long long  mActiveSheetIndex;
    NSMutableArray * mBulletBlips;
    int  mDateBase;
    NSDate * mDateBaseDate;
    ESDContainer * mEscherDrawingGroup;
    NSString * mFileName;
    bool  mIsOutOfMemoryConditionDetected;
    ECMappingContext * mMappingContext;
    NSMutableArray * mOtherResources;
    EDProcessors * mProcessors;
    EDResources * mResources;
    NSMutableArray * mSheets;
    NSString * mTemporaryDirectory;
    EDReference * mVisibleRange;
    EDWarnings * mWarnings;
}

+ (id)impliedColorMap;

- (void).cxx_destruct;
- (id)activeSheet;
- (unsigned long long)activeSheetIndex;
- (void)addOtherResources:(id)arg1;
- (void)addSheet:(id)arg1;
- (void)applyProcessors;
- (id)bulletBlips;
- (int)dateBase;
- (id)dateBaseDate;
- (void)dealloc;
- (id)description;
- (id)escherDrawingGroup;
- (id)fileName;
- (unsigned long long)indexOfSheet:(id)arg1;
- (unsigned long long)indexOfSheetWithName:(id)arg1;
- (id)init;
- (id)initWithFileName:(id)arg1 andStringOptimization:(bool)arg2;
- (id)initWithStringOptimization:(bool)arg1;
- (bool)isOutOfMemoryDetected;
- (unsigned int)legacyDateBase;
- (id)mappingContext;
- (void)outOfMemoryDetected;
- (id)processors;
- (void)reduceMemoryIfPossible;
- (void)removeSheetAtIndex:(unsigned long long)arg1;
- (void)removeWorksheetAtIndex:(unsigned int)arg1;
- (id)resources;
- (void)setActiveSheet:(id)arg1;
- (void)setActiveSheetIndex:(unsigned long long)arg1;
- (void)setDateBase:(int)arg1;
- (void)setEscherDrawingGroup:(id)arg1;
- (void)setMappingContext:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (void)setVisibleRange:(id)arg1;
- (id)sheetAtIndex:(unsigned long long)arg1;
- (id)sheetAtIndex:(unsigned long long)arg1 loadIfNeeded:(bool)arg2;
- (unsigned long long)sheetCount;
- (id)temporaryDirectory;
- (id)visibleRange;
- (id)warnings;
- (id)workbookName;

@end
