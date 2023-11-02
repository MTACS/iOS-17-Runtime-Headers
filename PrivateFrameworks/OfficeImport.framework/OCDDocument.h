
@interface OCDDocument : NSObject {
    OADBlipCollection * mBlips;
    NSMutableArray * mCharts;
    OADTextListStyle * mDefaultTextStyle;
    OADTheme * mDocumentTheme;
    OITSUPointerKeyDictionary * mDualDrawableMap;
    NSData * mEncryptionInfo;
    OADGraphicStyleCache * mGraphicStyleCache;
    OCDReader * mReader;
    OCDSummary * mSummary;
    OADTableStyleCollection * mTableStyles;
    OCDWriter * mWriter;
}

@property (nonatomic, readonly) OADBlipCollection *blips;
@property (nonatomic, readonly) NSMutableArray *charts;
@property (nonatomic, readonly) OADTextListStyle *defaultTextStyle;
@property (nonatomic, readonly) OITSUPointerKeyDictionary *dualDrawableMap;
@property (nonatomic, retain) OADGraphicStyleCache *graphicStyleCache;
@property (nonatomic, retain) OCDReader *reader;
@property (nonatomic, readonly) OCDSummary *summary;
@property (nonatomic, readonly) OADTableStyleCollection *tableStyles;
@property (nonatomic, retain) OCDWriter *writer;

- (void).cxx_destruct;
- (id)blips;
- (id)bulletBlips;
- (id)charts;
- (id)defaultTextStyle;
- (id)dualDrawableMap;
- (id)encryptionInfo;
- (id)graphicStyleCache;
- (id)init;
- (bool)isFromBinaryFile;
- (id)reader;
- (void)removeUnnecessaryOverrides;
- (void)setEncryptionInfo:(id)arg1;
- (void)setGraphicStyleCache:(id)arg1;
- (void)setReader:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)setWriter:(id)arg1;
- (id)summary;
- (id)tableStyles;
- (id)theme;
- (id)writer;

@end
