
@interface SXMutableDOM : SXDOM

@property (nonatomic, copy) SXMutableDOMAnalysis *analysis;
@property (nonatomic, retain) <SXAutoPlacement> *autoPlacement;
@property (nonatomic, readonly, copy) NSMutableDictionary *componentLayouts;
@property (nonatomic, readonly, copy) NSMutableDictionary *componentStyles;
@property (nonatomic, readonly, copy) NSMutableDictionary *componentTextStyles;
@property (nonatomic, readonly, copy) SXMutableComponents *components;
@property (nonatomic, retain) <SXDocumentStyle> *documentStyle;
@property (nonatomic, readonly, copy) SXMetadata *metadata;
@property (nonatomic, readonly, copy) NSMutableDictionary *resources;
@property (nonatomic, readonly, copy) NSMutableDictionary *textStyles;

- (id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8 analysis:(id)arg9 metadata:(id)arg10;
- (void)setAnalysis:(id)arg1;
- (void)setAutoPlacement:(id)arg1;
- (void)setDocumentStyle:(id)arg1;

@end
